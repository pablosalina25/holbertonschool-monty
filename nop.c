#include "monty.h"

/**
 * nop - doesn’t do anything.
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 */
void nop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	return;

	(void)line_number;
}
