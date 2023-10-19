#include <stdio.h>

/**
 * main - punto de entrada
 * Return: 0
 */

int main(void)
{
	char abc = 'z';

	while (abc >= 'a')
	{
		putchar(abc);
		abc--;
	}
	putchar('\n');
	return (0);
}
