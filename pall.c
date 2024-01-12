#include "monty.h"

/**
 * print_all_elements - Implements the Monty bytecode instruction "pall" to
 * print all elements of the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number in the Monty bytecode file
 * Return: 0 on success
 */
int print_all_elements(stack_t **stack, unsigned int line_number)
{
	stack_t *current_element = *stack;

	(void)line_number;

	if (!current_element)
	return (0);

	for (; current_element; current_element = current_element->next)
	{
	if (current_element->n)
	printf("%u\n", current_element->n);
	else
	printf("%u\n", 0);
	}

	return (0);
}
