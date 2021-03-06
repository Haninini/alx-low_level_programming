#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: the number tested for the sign
 * Return: 0 if the number is zero, 1 if positive and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
