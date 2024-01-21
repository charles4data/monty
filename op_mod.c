#include "monty.h"

/**
 * computes the modulo of 2nd to top element, divided
 * by the top element.
 * @stack: The stack to be operated on.
 */

void _mod(stack_t **stack)
{
        int divisor;
        int dividend;
        int result;

        if (*stack == NULL || (*stack)->prev == NULL)
        {
                fprintf(stderr, "Error: stack too short to perform mod\n");
                exit(EXIT_FAILURE);
        }

        divisor = (*stack)->n;
        if (divisor == 0) {
                fprintf(stderr, "Error: division by zero\n");
                exit(EXIT_FAILURE);
        }

        dividend = (*stack)->prev->n;
        result = dividend % divisor;

        /* Update the top of the stack with the result */
        (*stack)->prev->n = result;

        /* Pop the top element */
        _pop(stack);
}

