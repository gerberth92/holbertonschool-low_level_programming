#include "main.h"

/**
 * _strdup - funcion que retorna un puntero a una nueva locacion
 * @str: puntero solo lectura
 * Return: array que es la copia de str
 */
char *_strdup(char *str)
{
	char *array;
	int c;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (c = 0; str[c] != '\0'; c++)
	{
	}

	array = malloc(sizeof(char) * c);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < c; i++)
	{
		array[i] = str[i];
	}

	*(array + i) = '\0';

	return (array);
}
