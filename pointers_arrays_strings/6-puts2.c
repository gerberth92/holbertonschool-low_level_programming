#include "main.h"

/**
 * puts2 - imprime caracteres intercalados
 * @str: puntero tipo char
 */
void puts2(char *str)
{
	int c;
	int b;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	for  (b = 0; b < c; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
