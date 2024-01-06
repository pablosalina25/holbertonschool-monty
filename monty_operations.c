#include "monty.h"

cmd_t cmd;

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
