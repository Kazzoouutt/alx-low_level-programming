#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: The analyzed string
 *
 * Return: The length of str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
