#include "monty.h"
/**
 * push_element - Implements the push opcode.
 * @stack: Pointer to a stack node pointer
 * @line_number: Current line number
 * Return: 0 on success
 */
int push_element(stack_t **stack, unsigned int line_number)
{
	char *argument = NULL;
	unsigned int value = 0;
	int i = 0;
	stack_t *new_node = NULL;

	argument = strtok(NULL, " \t\n");
	if (argument == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	for (; argument[i] != '\0'; i++)
		if (!isdigit(argument[i]) && argument[i] != '-')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}

	value = atoi(argument);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
	return (0);
}
