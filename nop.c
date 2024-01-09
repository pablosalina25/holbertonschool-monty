#include "monty.h"

/**
 * nop - doesn’t do anything.
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 */
void nop(stack_t **stack, unsigned int line_number)
{
    if (stack != NULL && *stack != NULL)
    {
        /* Código para nop si es necesario */
    }
    else
    {
        fprintf(stderr, "L%u: Error - Stack is empty\n", line_number);
        exit(EXIT_FAILURE);
    }
}
