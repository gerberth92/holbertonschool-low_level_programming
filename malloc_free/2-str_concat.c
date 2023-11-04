#include "main.h"

/**
 * str_concat - funcion que acepta dos argumentos tipo char a concatenar
 * @s1: argumento 1 tipo char
 * @s2: argumento 2 tipo char
 * Return: puntero con la concatenacion
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int a, b, c, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{}

	for (b = 0; s2[b] != '\0'; b++)
	{}

	array = malloc(sizeof(char) * (a + b + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		array[i] = s1[i];
	}

	for (c = 0; c < b; c++)
	{
		array[a + c] = s2[c];
	}
	array[a + b] = '\0';

	return (array);
}
