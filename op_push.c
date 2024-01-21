#include "monty.h"

/**
 * _push - adds an element into a stack,
 * @value - value to push to stack,
 * @line_number: line
 * stack: stack to push
*/

void _push(stack_t **stack, int value)
{
        stack_t *new_node;

        new_node = malloc(sizeof(stack_t));

        if (new_node == NULL)
        {
                fprintf(stderr, "Memory allocation error\n");
                exit(EXIT_FAILURE);
        }

        new_node->n = value;
        new_node->next = *stack;
        new_node->prev = NULL;

        if (*stack != NULL)
        {
                (*stack)->prev = new_node;
        }

        *stack = new_node;
}