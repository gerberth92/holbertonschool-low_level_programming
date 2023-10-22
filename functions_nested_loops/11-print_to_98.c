#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - punto de entrada
 * @n: dato
 */
void print_to_98(int n)
{
	int contador = n;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}

	if (contador > 98)
	{
		for (contador = n; contador >= 98; contador--)
		{
			printf("%d", contador);

			if (contador > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
