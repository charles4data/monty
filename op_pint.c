#include "monty.h"

/**
 * _pint - prints the top element of a stack
 * @stack: stack whose top element is to be printed
 */

void _pint(stack_t *stack)
{
    if (stack->size == 0)
    {
        fprintf(stderr, "Error: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }

    printf("%d\n", stack->stack[stack->size - 1]);
}

