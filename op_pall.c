#include "monty.h"

/**
 * _pall - prints all items in a stack
 * @stack: The stack whose items are to be printed,
 * @line_number: line number
 */

void _pall(stack_t **stack, unsigned int line_number)
{
        stack_t *current = *stack;
        (void)line_number;

        while (current) {
                printf("%d\n", current->n);
                current = current->next;
        }
}
