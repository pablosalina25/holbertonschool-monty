#include "monty.h"

cmd_t cmd;
/**
 * freeStack - Frees all nodes in the stack.
 * @stack: Double pointer to the head of the stack.
 */
void freeStack(stack_t **stack)
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
 * new_Node - Creates a new node with the given value.
 * @value: Value to be stored in the new node.
 * Return: Pointer to the newly created node.
 */
stack_t *new_Node(int value)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

	new->n = value;
	new->prev = NULL;
	new->next = NULL;

	return (new);
}
