#include "monty.h"

int main(void)
/**
 * main - Entry point for the Monty interpreter
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
{
	stack_t *stack = NULL;

	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	pall(&stack);
	return (0);
}
