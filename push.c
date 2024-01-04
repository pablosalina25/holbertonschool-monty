#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the stack
 * @line_number: Line number in the file
 * @value: Value to be added to the stack
 */
void push(stack_t **stack, int line_number, int value)
{
	stack_t *new_node;

	if (!stack)
	{
		fprintf(stderr, "L%d: stack is NULL\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (!isdigit(value) && value[0] != '-' && !isdigit(value[1]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "L%d: malloc failed\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(value);
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
