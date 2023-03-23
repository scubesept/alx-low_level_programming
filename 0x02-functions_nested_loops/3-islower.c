#include "main.h"

/**
 * _islower = if input is a lowercase character
 * show 1 else 0
 *
 * @c: The character in ASCII code
 * a to b = 97 to 122
 *
 * Return: 1 for lowercase character, else o.
 */
int _islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (1);
    }
    else
    {
        return (0);
    }
    _putchar('\n');
}
