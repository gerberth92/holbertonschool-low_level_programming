#include "function_pointers.h"

/**
 * array_iterator - punto de entrada
 * @array: array con el que trabajaremos
 * @size: tamaño del array
 * @action: puntero a funcion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	int medida = (int)size;

	if (action != NULL)
	{
		if (array != NULL)
		{
			for (i = 0; i < medida; i++)
			{
				action(array[i]);
			}
		}
	}
}
