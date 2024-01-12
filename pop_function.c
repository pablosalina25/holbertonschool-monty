#include "monty.h"

/**
 * pop_element - Removes the top element from the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Current line number
 * Return: 0 on success
 */
int pop_element(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(temp);
	return (0);
}
