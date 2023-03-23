#include "main.h"
#include <stdio.h>

/**
 * _abs - compute the absolue
 * value of an integer
 * @n: input number as an integer
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
