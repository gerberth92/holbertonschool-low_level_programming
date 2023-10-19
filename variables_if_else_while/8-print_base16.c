#include <stdio.h>

/**
 * main - punto de entrada
 * Return: 0
 */

int main(void)
{
	char numero = 48;
	char letra = 'a';

	while (numero < 58)
	{
		putchar(numero);
		numero++;
	}

	while (letra <= 'f')
	{
		putchar(letra);
		letra++;
	}
	putchar('\n');
	return (0);
}
