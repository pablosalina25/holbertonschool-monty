#include "monty.h"
#include <unistd.h>

/**
 * print_all - Implements the pall opcode.
 * @stack: Pointer to a stack node pointer
 * @line_number: Current line number
 * Return: 0 on success
 */
int print_all(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;

	(void)line_number;
	if (!element)
		return (0);

	while (element)
	{
		if (element->n)
			printf("%u\n", element->n);
		else
			printf("%u\n", 0);
		element = element->next;
	}
	return (0);
}
