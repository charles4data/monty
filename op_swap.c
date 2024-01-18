#include "monty.h"

/**
 * _swap - swaps the top 2 elements of a stack
 * @stack: stack whose elements are to be swapped.
 */

void _swap(stack_t *stack)
{
    if (stack->size < 2)
    {
        fprintf(stderr, "Error: stack too short to swap\n");
        exit(EXIT_FAILURE);
    }

    int temp = stack->stack[stack->size - 1];
    stack->stack[stack->size - 1] = stack->stack[stack->size - 2];
    stack->stack[stack->size - 2] = temp;
}
