#include "main.h"

/**
 * swap_int - punto de entrada
 * @a: dato 1
 * @b: dato 2
 */
void swap_int(int *a, int *b)
{
	int contador = *a;

	*a = *b;
	*b = contador;
}
