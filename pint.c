#include "monty.h"

/**
 * print_top_element - Prints the element at the top of the stack.
 * @stack_pointer: Pointer to pointer to the first element on the stack.
 * @current_line: Line number in the Monty bytecode file.
 * Return: 0 if the first element is printed.
 */
void print_top_element(stack_t **stack_pointer, unsigned int current_line)
{
	if (*stack_pointer == NULL)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", current_line);
	exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack_pointer)->n);
}
