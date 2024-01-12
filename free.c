#include "monty.h"

/**
 * freedom - Frees the memory allocated for the stack and buffer.
 * @stack: Pointer to the pointer to the top of the stack.
 * @buffer: Pointer to the buffer.
 */
void freedom(stack_t *stack, char *buffer)
{
	stack_t *current_node;

	while (stack)
	{
	current_node = stack->next;
	free(stack);
	stack = current_node;
	}

	free(buffer);
	exit(EXIT_FAILURE);
}
