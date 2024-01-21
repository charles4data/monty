#include "monty.h"

/**
 * executeInstructions - executes the bytecodes
 * @instructions: instructions to execute
 * @stack: stack in question
 */

void executeInstructions(char *file_path)
{
        char *line;
        size_t len;
        ssize_t read;
        unsigned int line_number;
        stack_t *stack;
        char *opcode, *arg;
        FILE *file;

        file = fopen(file_path, "r");
        if (!file) {
                fprintf(stderr, "Error: Can't open file %s\n", file_path);
                exit(EXIT_FAILURE);
        }

        /* Initialize the stack */
        stack = NULL;

        /* Read and process the file line by line */
        line = NULL;
        len = 0;
        line_number = 0;

        while ((read = getline(&line, &len, file)) != -1)
        {
                line_number++;

                /* Ignore empty lines */
                if (read <= 1)
                        continue;

                /* Process the line */
                if (line[read - 1] == '\n')
                        line[read - 1] = '\0';

                /* Tokenize the line to get opcode and argument */
                opcode = strtok(line, " ");
                arg = strtok(NULL, " ");

                /* Execute Monty instructions based on opcode */
                if (opcode != NULL)
                {
                        if (strcmp(opcode, "push") == 0)
                        {
                                if (arg == NULL || (!isdigit(*arg) && *arg != '-')){
                                        fprintf(stderr, "L%u: usage: push integer\n", line_number);
                                        exit(EXIT_FAILURE);
                                }
                                _push(&stack, atoi(arg), line_number);
                        }
                }
        }

        free(line);
        fclose(file);
}