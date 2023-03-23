#include "main.h"

/**
 * print_last_digit = Prints the last digit
 * of an input number.
 * @n: input number as an integer.
 * Return: l = n % 10.
 */
int print_last_digit(int n)
{
	int l = n % 10;
   
	if (l < 0)
	{
        	_putchar(-l + 48);
		return (-l);
	}
	else
	{
    		_putchar(l + 48);
		return (l);
	}

}
