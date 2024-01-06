#include "monty.h"

/**
 * addTopTwoElements - Adds the top two elements of the stack.
 * @stackHead: Pointer to the head of the stack
 * @lineNumber: Line number for error handling
 * Return: No return value
 */
void addTopTwoElements(stack_t **stackHead, unsigned int lineNumber)
{
	stack_t *currentNode = *stackHead;

	int stackLength = 0;
	int sum;

	while (currentNode != NULL)
	{
	stackLength++;
	currentNode = currentNode->next;
	}

	if (stackLength < 2)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", lineNumber);
	fclose(cmd.file);
	free(cmd.content);
	freeStack(stackHead);
	exit(EXIT_FAILURE);
	}
	currentNode = *stackHead;
	sum = currentNode->n + currentNode->next->n;
	currentNode->next->n = sum;
	*stackHead = currentNode->next;

	free(currentNode);
}
