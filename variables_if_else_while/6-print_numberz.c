#include <stdio.h>

/**
 * main - punto de entrada
 * Return: 0
 */

int main(void)
{
	int digito = 48;

	while (digito <= 57)
	{
		putchar(digito);
		digito++;
	}
	putchar('\n');
	return (0);
}
