#include "monty.h"

int main(int argc, char *argv[])
/**
 * main - entry point
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing the command-line arguments.
 *
 * Return: Returns 0 if the execution is successful.
 */
{
	FILE *file;
	char *line = NULL;
	size_t line_length = 0;
	stack_t *stack = NULL;
	int line_number = 0;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: monty file\n");
	exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	for (line_number = 1; getline(&line, &line_length, file) != -1; line_number++)
	{
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}
