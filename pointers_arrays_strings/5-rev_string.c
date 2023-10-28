#include "main.h"

/**
 * rev_string - imprime al reves
 * @s: string
 */
void rev_string(char *s)
{
	int c;
	int b;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	for (b = 0; b < c / 2; b++)
	{
		char cadena;

		cadena = s[b];
		s[b] = s[c - b - 1];
		s[c - b - 1] = cadena;
	}
}
