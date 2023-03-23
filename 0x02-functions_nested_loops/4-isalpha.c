#include "main.h"

/**
 * _isalpha - Shows 1 if letters or 0 otherwise
 * @c: The character in ASCII code
 * Return: 1 if a to z or A to Z. Else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
