#include <stdio.h>

/**
 * main - punto de entrada
 * Return: 0
 */

int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
