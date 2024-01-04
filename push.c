#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 * @value: Value to be added to the stack
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	char *token = NULL;
	int i;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		if (*stack)
			free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	token = strtok(NULL, " \t\n");
	if (!token)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(new_node), free_stack(*stack), exit(EXIT_FAILURE);
	}
	for (i = 0; token[i] && token[0] != '-'; i++)
	{
		if (!isdigit(token[i]))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			free(new_node), free_stack(*stack), exit(EXIT_FAILURE);
		}
	}
	new_node->n = atoi(token);
	new_node->prev = NULL;
	if (!*stack)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}
