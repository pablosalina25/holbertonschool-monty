#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

/**
 * struct cmd_s - Command data structure
 * @file: File pointer
 * @line_number: Line number
 *
 * Description: Structure to hold command-related data.
 */
typedef struct cmd_s
{
    FILE *file;
    unsigned int line_number;
} cmd_t;

int _isdigit(int c);
void freedom(stack_t *stack, char *buffer);
int _push(stack_t **stack, unsigned int line_number);
int _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
int _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
int _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack);

#endif /* MONTY_H */
