#include "monty.h"

int main(int argc, char **argv)
{
    char *line = NULL, *opcode = NULL;
    FILE *file = NULL;
    size_t buf_size = 0;
    unsigned int line_number = 0;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (getline(&line, &buf_size, file) != -1)
    {
        line_number++, opcode = strtok(line, " \t\n");
        if (!opcode)
            continue;

        if (strcmp(opcode, "push") == 0)
            _push(&stack, line_number);
        else if (strcmp(opcode, "pall") == 0)
            _pall(&stack, line_number);
        else if (strcmp(opcode, "pint") == 0)
            _pint(&stack, line_number);
        else if (strcmp(opcode, "pop") == 0)
            _pop(&stack, line_number);
        else if (strcmp(opcode, "swap") == 0)
            _swap(&stack, line_number);
        else if (strcmp(opcode, "add") == 0)
            _add(&stack, line_number);
        else if (strcmp(opcode, "nop") == 0)
            _nop(&stack);
        else
        {
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);
    freedom(stack, line);
    return (0);
}
