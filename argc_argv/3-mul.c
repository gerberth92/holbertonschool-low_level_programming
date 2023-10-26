#include <stdlib.h>
#include "main.h"

/**
 * main - punto de entrada
 * @argc: contador
 * @argv: puntero a un array
 * Return: 1 si es error
 */
int main(int argc, char *argv[])
{
	int result;
	int argc1, argc2;

	if (argc == 3)
	{
		argc1 = atoi(argv[1]);
		argc2 = atoi(argv[2]);

		result = argc1 * argc2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
