#include "monty.h"

/**
 * _sub - pops two values from a stack and subtracts them
 * @stack - stack in question
 */

void _sub(stack_t **stack)
{
        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "Insufficient elements in the stack to perform subtraction\n");
                exit(EXIT_FAILURE);
        }

        (*stack)->next->n -= (*stack)->n;
        _pop(stack);
}