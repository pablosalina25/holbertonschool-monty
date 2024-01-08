#include "monty.h"

/**
 * nop - Doesn't perform any operation.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 *
 * Return: None.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	return;
	(void)line_number;
}
