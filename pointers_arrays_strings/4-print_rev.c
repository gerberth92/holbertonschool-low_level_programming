#include "main.h"

/**
 * print_rev - putno de entrada
 * @s: dato
 */
void print_rev(char *s)
{
	int c;
	int b;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
