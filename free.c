#include "monty.h"

/**
 * freedom - Frees the memory allocated for the stack and buffer.
 * @stack: Pointer to the pointer to the top of the stack.
 * @buffer: Pointer to the buffer.
 */
void freedom(stack_t *stack, char *buffer)
{
	stack_t *current_node;

	for (; stack; stack = current_node)
	{
	current_node = stack->next;
	free(stack);
	}

	free(buffer);
}
