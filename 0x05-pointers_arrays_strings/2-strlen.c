#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: The analyzed string
 *
 * Return: The length of str
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
