#include "monty.h"

/**
 * executeInstructions - executes the bytecodes
 * @instructions: instructions to execute
 * @stack: stack in question
 */

void executeInstructions(char *file_path)
{
    char *args[5];
    stack_t *stack;
    char *line;
    size_t len;
    ssize_t read;
    unsigned int line_number;

    FILE *file = fopen(file_path, "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", file_path);
        exit(EXIT_FAILURE);
    }

    stack = NULL;
    line = NULL;
    len = 0;
    line_number = 0;

    while ((read = getline(&line, &len, file)) != -1)
    {
        line_number++;

        /* Ignore empty lines */
        if (read <= 1)
            continue;

        /* Remove newline character if present */
        if (line[read - 1] == '\n')
            line[read - 1] = '\0';

        args[0] = strtok(line, " ");
        args[1] = NULL;

        /* Execute Monty instructions based on opcode */
        if (args[0] != NULL)
        {
            /* Match the opcode and call the corresponding function */
            if (strcmp(args[0], "pint") == 0)
            {
                _pint(stack);
            }
            else if (strcmp(args[0], "add") == 0)
            {
                _add(&stack);
            }
            else if (strcmp(args[0], "mod") == 0)
            {
                _mod(&stack);
            }
            else if (strcmp(args[0], "mul") == 0)
            {
                _mul(&stack);
            }
            else if (strcmp(args[0], "swap") == 0)
            {
                _swap(&stack);
            }
            else if (strcmp(args[0], "pop") == 0)
            {
                _pop(&stack);
            }
            else if (strcmp(args[0], "sub") == 0)
            {
                _sub(&stack);
            }
            else if (strcmp(args[0], "nop") == 0)
            {
                _nop();
            }
            else if (strcmp(args[0], "push") == 0)
            {
                    if (args[1] == NULL)
                    {
                            fprintf(stderr, "L%d: push requires an argument\n", line_number);
                            exit(EXIT_FAILURE);
                    }

                    _push(&stack, atoi(args[1]));
            }
            else if (strcmp(args[0], "pall") == 0)
            {
                _pall(stack);
            }
            else
            {
                fprintf(stderr, "L%d: invalid argument for opcode %s\n", line_number, args[0]);
                exit(EXIT_FAILURE);
            }
        }
    }
    free(line);
    fclose(file);
}