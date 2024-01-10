#include "monty.h"
/**
 * swap_elements - Swaps the top two elements of the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Current line number
 */
void swap_elements(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
