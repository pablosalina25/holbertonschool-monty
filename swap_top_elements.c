#include "monty.h"

/**
 * swap_top_two_elements - Swaps the top two elements of the stack.
 * @stack_pointer: Double pointer to the first element on the stack.
 * @current_line: Line number in the Monty bytecode file.
 * Return: 0 if the two elements are interchanged.
 */
void swap_top_two_elements(stack_t **stack_pointer, unsigned int current_line)
{
	if (*stack_pointer == NULL || (*stack_pointer)->next == NULL)
	{
	fprintf(stderr, "L%u: can't swap, stack too short\n", current_line);
	exit(EXIT_FAILURE);
	}

	int temp_value = (*stack_pointer)->n;
	(*stack_pointer)->n = (*stack_pointer)->next->n;
	(*stack_pointer)->next->n = temp_value;
}
