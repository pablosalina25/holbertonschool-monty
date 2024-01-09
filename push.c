#include "monty.h"
#include <stdlib.h>

/**
 * push - creates a new node at the beginning of stack
 * @stack: double pointer to the stack
 */
void push(stack_t **stack)
{
    stack_t *new = NULL;
    int value = 0;

    if (cmd.content == NULL)
    {
        fprintf(stderr, "Error: Can't push without a value\n");
        exit(EXIT_FAILURE);
    }

    value = atoi(cmd.content);

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = value;
    new->prev = NULL;
    new->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new;

    *stack = new;
}

/**
 * free_node - frees the memory allocated for a single node
 * @node: pointer to the node to be freed
 */
void free_node(stack_t *node)
{
    free(node);
}

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
        free_node(temp);  // Usa la función para liberar un solo nodo
    }

    *stack = NULL;
}
