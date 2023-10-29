#include "main.h"

/**
 * _strcpy - guarda una string en un puntero
 * @dest: puntero donde se guardara la copia del string
 * @src: contiene el string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = src[c];
	return (dest);
}
