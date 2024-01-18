#include "monty.h"


void executeInstruction(stack_t *stack, const char *instruction, int value)
{
        if (strcmp(instruction, "push") == 0)
        {
                _push(stack, value);
        }
        else if (strcmp(instruction, "pop") == 0)
        {
                _pop(stack);
        }
        else if (strcmp(instruction, "swap") == 0)
        {
                _swap(stack);
        }
        else if (strcmp(instruction, "add") == 0)
        {
                _add(stack);
        }
        else if (strcmp(instruction, "nop") == 0)
        {
                _nop();
        }
        else if (strcmp(instruction, "sub") == 0)
        {
                _sub(stack);
        }
        else if (strcmp(instruction, "div") == 0)
        {
                _div(stack);
        }
        else if (strcmp(instruction, "mul") == 0)
        {
                _mul(stack);
        }
        else if (strcmp(instruction, "mod") == 0)
        {
                _mod(stack);
        }
        else if (strcmp(instruction, "pint") == 0)
        {
                _pint(stack);
        }
        else
        {
                fprintf(stderr, "Error: Unknown instruction '%s'\n", instruction);
                exit(EXIT_FAILURE);
        }
}