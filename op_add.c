#include "monty.h"

/**
 * _add - adds a stack
 * @stack - stack to add
 */

void _add(stack_t **stack)
{
        int result;

        if (*stack == NULL || (*stack)->prev == NULL || (*stack)->prev->prev == NULL)
        {
                fprintf(stderr, "Error: stack too short to add\n");
                exit(EXIT_FAILURE);
        }
        result = (*stack)->prev->n + (*stack)->n;

        _pop(stack);
        _pop(stack);
        _push(stack, result);
}