include <stdio.h>
#include <stdlib.h>

typedef struct
{
}
	stack_t;

int main(int numero_argumentos, char *argumentos[])
{
	FILE *archivo;
	char *linea = NULL;
	size_t longitud_linea = 0;
	stack_t *pila = NULL;
	int numero_linea = 0;

	if (numero_argumentos != 2)
	{
	fprintf(stderr, "Uso: programa archivo\n");
	exit(EXIT_FAILURE);
	}
	
	return (0);
}
