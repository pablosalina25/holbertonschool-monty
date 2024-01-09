nclude "monty.h"

/**
 * nop - doesn’t do anything.
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 * @data: pointer to void data
 */
void nop(stack_t **stack, unsigned int line_number, void *data)
{
	(void)stack;
	(void)line_number;
	(void)data;
}
