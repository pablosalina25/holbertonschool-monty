#include "monty.h"

int main(void)
{
    stack_t *stack = NULL;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    pall(&stack, 0); // Debes proporcionar ambos argumentos
    return (0);
}
