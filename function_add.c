#include "monty.h"

/**
 * add_elements - Adds the top two elements of the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: Line number of the current operation
 * Return: 0 on success
 */
int _add(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int sum = (*stack)->n + (*stack)->next->n;
    (*stack)->next->n = sum;
    _pop(stack, line_number);
    return (0);
}
