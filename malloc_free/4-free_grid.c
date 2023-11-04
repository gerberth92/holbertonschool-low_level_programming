#include "main.h"

/**
 * free_grid - libera la funcion 3-alloc_grid.c
 * @grid: puntero a otro puntero
 * @height: numero de filas
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
