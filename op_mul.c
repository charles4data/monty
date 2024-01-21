#include "monty.h"

/**
 * _mul - multiplies the top 2 elements of a stack
 * @stack: stack whose top 2 elements are to be multiplied
 */

void _mul(stack_t **stack)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "Insufficient elements in the stack to perform multiplication\n");
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n *= (*stack)->n;
    _pop(stack);
}
