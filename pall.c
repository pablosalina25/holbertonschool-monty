#include "monty.h"
#include <stdio.h>

/**
 * free_stack - frees the memory allocated for the stack
 * @stack: double pointer to the stack
 */
void free_stack(stack_t **stack)
{
    stack_t *current = *stack;

    while (current != NULL)
    {
        stack_t *temp = current;
        current = current->next;
        free(temp);
    }

    *stack = NULL;
}

/**
 * pall - Print all the values of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the command (unused).
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    (void)line_number;

    if (current == NULL)
        return;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }

    free_stack(stack);
}
