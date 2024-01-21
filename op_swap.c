#include "monty.h"

/**
 * _swap - swaps the top 2 elements of a stack
 * @stack: stack whose elements are to be swapped.
 */

void _swap(stack_t **stack)
{
        int temp;

        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "Insufficient elements in the stack to perform swap\n");
                exit(EXIT_FAILURE);
        }

        temp = (*stack)->n;
        (*stack)->n = (*stack)->next->n;
        (*stack)->next->n = temp;
}
