#include "monty.h"

/**
 * _pall - prints all items in a stack
 * @stack: The stack whose items are to be printed,
 * @line_number: line number
 */

void _pall(stack_t **stack, unsigned int line_number)
{
        stack_t *current;

        (void)line_number;

        current = *stack;

        while (current != NULL)
        {
                printf("%d\n", current->n);
                current = current->next;
        }
}
