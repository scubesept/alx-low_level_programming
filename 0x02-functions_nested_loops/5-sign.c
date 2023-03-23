#include "main.h"

/**
 * print_sign - Determine if the input number
 * greater, equal or less than zero.
 *
 * @n: Input number is integer.
 *
 * Return: 1 if n>0, 0 elseif n==0 else -1.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43);
        return (1);
    }
    else if (n == 0)
    {
        _putchar(48);
        return (0);
    }
    else
    {
        _putchar(45);
        return (-1);
    }
    _putchar('\n');
}
