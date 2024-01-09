#include "monty.h"
#include <unistd.h>

/**
 * pall - Print all the values of the stack.
 * @stack: Double pointer to the stack.
 * @n: Unused parameter.
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int n)
{
	stack_t *current = *stack;
	(void)n;

	while (current != NULL)
	{
	dprintf(STDOUT_FILENO, "%d\n", current->n);
	current = current->next;
	}
}
