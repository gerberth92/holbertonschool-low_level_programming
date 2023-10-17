#include <stdio.h>

/**
 * main - punto de entrada
 * Return: 0
 */

int main(void)
{
	char caracter;
	int entero;
	long int entero_long;
	long long int entero_long_long;
	float flotante;

	printf("Size of a char: %ld byte(s)\n", sizeof(caracter));
	printf("Size of an int: %ld byte(s)\n", sizeof(entero));
	printf("Size of a long int: %ld byte(s)\n", sizeof(entero_long));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(entero_long_long));
	printf("Size of a float: %ld byte(s)\n", sizeof(flotante));
	return (0);
}
