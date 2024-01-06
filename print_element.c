#include "monty.h"

/**
 * printTopElement - Prints the top element of the stack
 * @stackHead: Pointer to the head of the stack
 * @lineNumber: Line number for error handling
 * Return: No return value
 */
void printTopElement(stack_t **stackHead, unsigned int lineNumber)
{
    if (*stackHead == NULL)
    {
        fprintf(stderr, "L%u: can't print, stack empty\n", lineNumber);
        fclose(cmd.file);
        free(cmd.content);
        freeStack(stackHead);
        exit(EXIT_FAILURE);
    }
    
    printf("%d\n", (*stackHead)->n);
}
