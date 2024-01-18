#include "monty.h"

/**
 * _pall - prints all items in a stack
 * @stack: The stack whose items are to be printed,
 */

void _pall(stack_t *stack)
{
    for (size_t i = 0; i < stack->size; i++)
    {
        printf("%d\n", stack->stack[i]);
    }
}
