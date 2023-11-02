#include "main.h"
#include <stdlib.h>

/**
 * main - punto de entrada
 * @argc: contador de argumentos
 * @argv: array de argumentos
 * Return: 1 si da error
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
