#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int push(stack_t **stack, unsigned int line_number);
int is_digit(int character);
int print_all_elements(stack_t **stack, unsigned int line_number);
void swap_top_two_elements(stack_t **stack_pointer, unsigned int current_line);
void nop(stack_t **stack, unsigned int line_number);
void print_top_element(stack_t **stack_pointer, unsigned int current_line);
int pop_element(stack_t **stack, unsigned int line_number);
void freedom(stack_t *stack, char *buffer);
void execute_instruction(const char *opcode, stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);

#endif
