#include "main.h"

/**
 * print_alphabet_x10 - void
 * Returno: 0
 */
void print_alphabet_x10(void)
{
	int contador;
	char abc;

	for (contador = 1; contador <= 10; contador++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
