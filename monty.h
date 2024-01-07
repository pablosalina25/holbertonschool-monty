#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

typedef struct
{
    FILE *file;
    char *content;
} cmd_t;

extern cmd_t cmd;

void freeStack(stack_t **stack);
void pall(stack_t **stack, unsigned int n);
void swapTopElements(stack_t **stackHead, unsigned int lineNumber);
void addTopTwoElements(stack_t **stackHead, unsigned int lineNumber);
void printTopElement(stack_t **stackHead, unsigned int lineNumber);
void pop(stack_t **stack, unsigned int line_number);
int is_integer(const char *str);
stack_t *new_Node(int value);

#endif
