#include "monty.h"

/**
 * swapTopElements - Swaps the top two elements of the stack.
 * @stackHead: Pointer to the head of the stack
 * @lineNumber: Line number for error handling
 * Return: No return value
 */
void swapTopElements(stack_t **stackHead, unsigned int lineNumber)
{
    stack_t *currentNode;
    int stackLength = 0;
    int tempValue;

    currentNode = *stackHead;
    for (; currentNode != NULL; currentNode = currentNode->next)
    {
        stackLength++;
    }

    if (stackLength < 2)
    {
        fprintf(stderr, "L%d: cannot swap, stack too short\n", lineNumber);
        fclose(cmd.file); 
        free(cmd.content);
        freeStack(stackHead);  // Corregir aquí, pasar stackHead directamente
        exit(EXIT_FAILURE);
    }

    currentNode = *stackHead;
    tempValue = currentNode->n;
    currentNode->n = currentNode->next->n;
    currentNode->next->n = tempValue;
}
