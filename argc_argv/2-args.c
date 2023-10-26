#include "main.h"

/**
 * main - punto de entrada
 * @argc: contador
 * @argv: array
 * contador: variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int contador;

	for (contador = 0; contador < argc; contador++)
	{
		printf("%s\n", argv[contador]);
	}
	return (0);
}
