#include "main.h"

/**
 * alloc_grid - puntero a puntero
 * @width: numero de columnas
 * @height: numero de filas
 * Return: un puntero a una array de 2 dimensiones
 */
int **alloc_grid(int width, int height)
{
	int **array_2_dimensiones;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array_2_dimensiones = malloc(sizeof(int *) * height);

	if (array_2_dimensiones == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array_2_dimensiones[i] = malloc(sizeof(int) * width);

		if (array_2_dimensiones[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array_2_dimensiones[j]);
			}
			free(array_2_dimensiones);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_2_dimensiones[i][j] = 0;
		}
	}

	return (array_2_dimensiones);
}
