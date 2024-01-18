#include "monty.h"

/**
 * computes the modulo of 2nd to top element, divided
 * by the top element.
 * @stack: The stack to be operated on.
 */

void _mod(stack_t *stack)
{
        int result;

        if (stack->size < 2 || stack->stack[stack->size - 1] == 0)
        {
                fprintf(stderr, "Error: modulo by zero or stack too short\n");
                exit(EXIT_FAILURE);
        }

        result = stack->stack[stack->size - 2] % stack->stack[stack->size - 1];
        pop(stack);
        pop(stack);
        push(stack, result);
}

