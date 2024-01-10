#include "monty.h"

cmd_t cmd;

/**
 * free_stack - Frees all nodes in the stack.
 * @stack: Double pointer to the head of the stack.
 */
void free_stack(stack_t **stack)
{
    if (stack == NULL || *stack == NULL)
        return;

    stack_t *current = *stack;
    stack_t *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    *stack = NULL;
}

/**
 * create_node - Creates a new node with the given value.
 * @value: Value to be stored in the new node.
 * Return: Pointer to the newly created node.
 */
stack_t *create_node(int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = NULL;

    return new_node;
}
