#include "main.h"

/**
 * _isalpha - check if a character is alphabetic
 *
 * Return: 1 if uppercase or lowercase letter or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
