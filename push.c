#include "monty.h"
#include <stdlib.h>

/**
 * push - creates a new node at the beginning of stack
 * @stack: double pointer to the stack
 * @line_number: line number of the command
 */
void push(stack_t **stack, unsigned int line_number)
void push(stack_t **stack)
{
	stack_t *new = NULL;
	int value = 0;
	(void)line_number;

	value = 42;
	if (cmd.content == NULL)
	{
	fprintf(stderr, "Error: Can't push without a value\n");
	exit(EXIT_FAILURE);
	}

	stack_t *new_Node(int value);
	value = atoi(cmd.content);

	new = new_Node(value);
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

    *stack = NULL;
}
