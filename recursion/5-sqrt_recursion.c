#include "main.h"

/**
 * _sqrt_recursion - calcula si n es menor que 0
 * @n: numero a calcular
 * @i: argumento tipo int de la funcion raiz_cuadrada
 * Return: -1 si es menor que 0
 */
int raiz_cuadrada(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (raiz_cuadrada(n, 1));
}

/**
 * raiz_cuadrada - calcula la raiz cuadrada de n
 * @i: numero que se usara para elevar al cuadrado
 * @n: numero a calcular
 * Return: la raiz cuadra si es un numero entero o -1 si es menor que 0
 */
int raiz_cuadrada(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	if (n < i * i || i * i < 0)
	{
		return (-1);
	}
	return (raiz_cuadrada(n, i + 1));
}
