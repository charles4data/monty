#include "monty.h"

/**
 * _pall - prints all items in a stack
 * @stack: The stack whose items are to be printed,
 * @line_number: line number
 */

void _pall(stack_t *stack)
{
        printf("Stack elements: ");
        while (stack != NULL)
        {
                printf("%d ", stack->n);
                stack = stack->next;
        }
        printf("\n");
}
