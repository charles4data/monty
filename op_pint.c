#include "monty.h"

/**
 * _pint - prints the top element of a stack
 * @stack: stack whose top element is to be printed
 */

void _pint(stack_t *stack)
{
        if (stack == NULL)
        {
                fprintf(stderr, "Stack is empty\n");
                exit(EXIT_FAILURE);
        }

        printf("Top element: %d\n", stack->n);
}

