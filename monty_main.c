#include "monty.h"

/**
 * main - Entry point for the Monty interpreter
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	FILE *monty_file;
	char *line_buffer = NULL;
	size_t buffer_size = 0;
	stack_t *monty_stack = NULL;
	int line_number = 0;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	if (!monty_file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	for (; getline(&line_buffer, &buffer_size, monty_file) != -1; line_number++)
	{
	}
	free(line_buffer);
	fclose(monty_file);
	return (EXIT_SUCCESS);
}
