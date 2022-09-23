#include "main.h"

/**
 * _strncat - concentrates two strings using at most
 * @dest: the string to be
 * @src: the string to be
 * @n: the number of bytes from src
 *
 * Retur: dest
 */

char *_strnct(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
