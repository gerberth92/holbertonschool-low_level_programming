#include "main.h"

/**
 * print_last_digit - punto de entrada
 * @n: dato
 * Return: ultimo digito
 */
int print_last_digit(int n)
{
	int entero;

	if (n < 0)
	{
		entero = (n * -1);

		_putchar(entero % 10 + '0');
	}

	if (n >= 0)
	{
		_putchar(n % 10 + '0');
	}
	return (entero % 10);
}
