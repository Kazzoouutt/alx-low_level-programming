#include "main.h"

/**
 * main - prints the alphabet in lowercase then a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z', x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
