#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* Estructura de un nodo de la pila */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* Estructura de una instrucción Monty */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Funciones del intérprete Monty */
void push(stack_t **stack, int value);
void pall(stack_t **stack);
void swap_top_elements(stack_t **stack_head, unsigned int cont);
void addTopTwoElements(stack_t **stackHead, unsigned int cont);

#endif /* MONTY_H */
