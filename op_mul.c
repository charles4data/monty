#include "monty.h"

/**
 * _mul - multiplies the top 2 elements of a stack
 * @stack: stack whose top 2 elements are to be multiplied
 */

void _mul(stack_t *stack)
{
        int result;

        if (stack->size < 2)
        {
                fprintf(stderr, "Error: stack too short to multiply\n");
                exit(EXIT_FAILURE);
        }

        result = stack->stack[stack->size - 2] * stack->stack[stack->size - 1];
        pop(stack);
        pop(stack);
        push(stack, result);
}
