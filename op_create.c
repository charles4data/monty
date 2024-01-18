#include "monty.h"

/**
 * _create - creates a stack where there is none
 * Return: stack.
 */

stack_t *_create()
{
    stack_t *stack = (stack_t *)malloc(sizeof(stack_t));

    if (stack == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    stack->stack = NULL;
    stack->size = 0;

    return (stack);
}