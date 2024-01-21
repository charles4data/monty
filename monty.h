#ifndef MONTY_H
#define MONTY_H

/* Including c libraries */
#define _GNU_SOURCE
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <unistd.h>

/* Defining data structures */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Define global variables */
#define MAX_BUFFER_SIZE 1024;

/* Function prototypes */
void executeInstructions(char *file_path);
instruction_t *get_opcode(char *opcode);
int is_integer(const char *str);
void _push(stack_t **stack, int value);
void _pall(stack_t *stack);
void _pint(stack_t *stack);
void _add(stack_t **stack);
void _mod(stack_t **stack);
void _mul(stack_t **stack);
void _swap(stack_t **stack);
int _pop(stack_t **stack);
void _sub(stack_t **stack);
void _nop();

#endif
