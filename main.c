 #include "monty.h"
/**
 * main - Entry point for the Monty interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: Exit status.
 */
int main(int argc, char *argv[])
{
	cmd_t cmd;
	/*stack_t *stack = NULL;*/

	if (argc != 2)
	{
	fprintf(stderr, "Usage: monty file\n");
	exit(EXIT_FAILURE);
	}

	cmd.file = fopen(argv[1], "r");
	if (cmd.file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}

	cmd.content = NULL;

	fclose(cmd.file);
	free(cmd.content);

	return (0);
}
