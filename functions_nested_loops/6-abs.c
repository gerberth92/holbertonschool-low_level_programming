#include "main.h"

/**
 * _abs - punto de entrada
 * @int: valor
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	if (n >= 0)
	{
		return (n);
	}
	return (0);
}
