#include "monty.h"
/**
* _pint - The opcode pint prints a value at
* the top of the stack, followed by a new line
* @stack: stack where work will be done.
* @line_number: number of lines.
* Return: 0 if the first element is printed
**/
void _pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL && (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", ((*stack)->n)); 
}
