#include "monty.h"

/**
 * is_digit - Checks if a character is a digit.
 *
 * @character: The character to check.
 *
 * Return: 1 if @character is a digit, 0 otherwise.
 */
int is_digit(int character)
{
	if (character >= '0' && character <= '9')
	return (1);
	else
	return (0);
}
