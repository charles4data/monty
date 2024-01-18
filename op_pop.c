#include "monty.h"

/**
 * _pop - removes an item from a stack
 * @param stack
 */

void _pop(stack_t *stack)
{
    if (stack->size == 0)
    {
        fprintf(stderr, "Error: can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }

    stack->stack = realloc(stack->stack, (stack->size - 1) * sizeof(int));
    if (stack->stack == NULL && stack->size > 1)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    stack->size--;
}

