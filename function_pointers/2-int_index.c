#include "function_pointers.h"

/**
 * int_index - punto de entrada
 * @array: array que se usara
 * @size: numero de elementos de la array
 * @cmp: puntero a funcion
 * Return: retorna el indice del primer elemento
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);

			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
