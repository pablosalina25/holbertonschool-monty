#include "monty.h"

/**
 * push - Implements the Monty bytecode instruction "push" to push
 * an integer onto the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the Monty bytecode file
 * Return: 0 on success
 */
int push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \t\n");

	if (!arg || (*arg != '-' && !is_digit(*arg)))
	{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}

	int val = atoi(arg);

	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

	new_node->n = val;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
	(*stack)->prev = new_node;

	*stack = new_node;
	return (0);
}
