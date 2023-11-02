#include "main.h"

/**
 * create_array - puntero tipo char
 * @size: dato
 * @c: caracter
 * Return: puntero a la array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		*(array + i) = c;
	}

	*(array + i) = '\0';

	return (array);
}
