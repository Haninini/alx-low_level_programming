#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n - the number tested for the sign
 * Return: 0 if the number is zero, 1 if the number is positive and -1 if the number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
			_putchar('0');
	}
	else if ( n < 0)
	{
		return (-1);
		_putchar('-');
	}

	return;
}
