#include "monty.h"

/**
 * _pop - removes an item from a stack
 * @stack
 */

int _pop(stack_t **stack)
{
        int value;
        stack_t *temp;

        if (*stack == NULL)
        {
                fprintf(stderr, "Stack is empty\n");
                exit(EXIT_FAILURE);
        }

        value = (*stack)->n;
        temp = *stack;
        *stack = (*stack)->next;

        if (*stack != NULL) {
                (*stack)->prev = NULL;
        }

        free(temp);
        return (value);
}

