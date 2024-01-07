#include "monty.h"
/**
 * pall - Print all the values of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the command (unused).
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	if (current == NULL)
	return;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	}
}
