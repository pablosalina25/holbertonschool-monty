#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack_s
{
    int n;
    struct stack_s *next;
} stack_t;

void push(stack_t **stack, int line_number);
void pall(stack_t **stack, int line_number);

#endif
