#include "main.h"

/**
 * times_table - punto de entrada
 * Return: dato
 */
void times_table(void)
{
	int i;
	int j;
	int producto;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			producto = i * j;

			if (producto >= 10)
			{
				_putchar(producto / 10 + '0');
			}
			_putchar(producto % 10 + '0');

			if (j < 9)
			{
				_putchar(',');

				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
