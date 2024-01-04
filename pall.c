#include "monty.h"

/**
 * pall - Prints all the values on the stack
 * @stack: Puntero a la pila
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	}
}
