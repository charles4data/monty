#include "monty.h"

/**
 * _push - adds an element into a stack,
 * @value - value to push to stack,
*/

void _push(stack_t *stack, int value)
{
    stack->stack = malloc(stack->stack, (stack->size + 1) * sizeof(int));

    if (stack->stack == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    stack->stack[stack->size++] = value;
}