#include "main.h"

/**
 * print_array - imprime los elementos de una array
 * @a: puntero de tipo entero que apunta a una array
 * @n: variable de tipo entero que aguarda el indide de un array
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (c < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
