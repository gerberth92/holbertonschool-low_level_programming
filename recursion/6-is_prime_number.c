#include "main.h"

/**
 * primo - verifica si el numero es primo
 * @n: numero a verificar
 * @i: divisor
 * Return: 1 si es primo o 0 si no lo es
 */
int primo(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (primo(n, i + 2));
	}
}

/**
 * is_prime_number - funcion principal
 * @n: valor ingresado
 * Return: 1 si es primo o 0 si no lo es
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (primo(n, 3));
	}

}
