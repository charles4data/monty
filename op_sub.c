#include "monty.h"


void _sub(stack_t *stack)
{
        int result;

        if (stack->size < 2)
        {
                fprintf(stderr, "Error: stack too short to subtract\n");
                exit(EXIT_FAILURE);
        }


        result = stack->stack[stack->size - 2] - stack->stack[stack->size - 1];
        pop(stack);
        pop(stack);
        push(stack, result);
}