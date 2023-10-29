#include "main.h"

/**
 * _pow_recursion - calcula el valor de un numero elevado a una potencia
 * @x: base
 * @y: exponente
 * Return: el valor de la operacion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
