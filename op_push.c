#include "monty.h"

/**
 * _push - adds an element into a stack,
 * @value - value to push to stack,
 * @line_number: line
 * stack: stack to push
*/

void _push(stack_t **stack, int value, unsigned int line_number)
{
        stack_t *new_node;
        (void)line_number;

        /* Create a new node */
        new_node = malloc(sizeof(stack_t));
        if (!new_node)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(EXIT_FAILURE);
        }

        /* Set the value and links for the new node */
        new_node->n = value;
        new_node->prev = NULL;
        new_node->next = *stack;

        /* Update the previous node's link if the stack is not empty */
        if (*stack)
                (*stack)->prev = new_node;

        /* Update the stack pointer */
        *stack = new_node;
}