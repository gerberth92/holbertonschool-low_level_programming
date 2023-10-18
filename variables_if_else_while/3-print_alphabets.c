#include <stdio.h>

/**
 * main - punto de entrada
 * Return: 0
 */

int main(void)
{
	char abc = 'a';
	char ABC = 'A';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}

	while (ABC <= 'Z')
	{
		putchar(ABC);
		ABC++;
	}
	putchar('\n');
	return (0);
}
