#include "main.h"

/**
 * _strdup - funcion que retorna un punto a una nueva locacion
 * 
 *
 *
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *array;
	int c;
	int i;

	for (c = 0; str[c] <= '\0'; c++)
	{
	}

	array = malloc(sizeof(char) * c);

	for (i = 0; i <= c; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
