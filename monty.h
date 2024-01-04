#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - Structure of a stack node
 * @n: Integer data
 * @next: Pointer to the next node in the stack
 */
typedef struct stack_s
{
    int n;
    struct stack_s *next;
} stack_t;

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in Monty file
 */
void push(stack_t **stack, int line_number);

/**
 * pall - Prints all the elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in Monty file
 */
void pall(stack_t **stack, int line_number);

#endif /* MONTY_H */
