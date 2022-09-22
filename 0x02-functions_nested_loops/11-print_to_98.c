#include "main.h"

/**
 * print_to_98 - Prints all natural number from input to ninety right
 * using a comma and space dilimeter
 * @n: The starting number
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
		_putchar('\n');
	}

	else 
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}

