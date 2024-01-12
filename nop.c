#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Pointer to the stack.
 * @line_number: Number of the current line.
 *
 * Return: None.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	return;
	(void)line_number;
}
