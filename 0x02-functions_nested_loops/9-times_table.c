#include "main.h"

/**
 * times_table - Prints the 9x table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
