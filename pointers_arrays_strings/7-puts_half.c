#include "main.h"

/**
 * puts_half - imprime la mitad del string
 * @str: puntero
 */
void puts_half(char *str)
{
	int c;
	int b;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	if (c % 2 == 0)
	{
		for (b = c / 2; b < c; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		for (b = (c + 1) / 2; b < c; b++)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
