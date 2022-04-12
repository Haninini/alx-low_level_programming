#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @x: the given number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	int ld;
	
	if (x < 0)
	{
		ld = (x % 10) * -1;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = x % 10;
		_putchar(ld + '0');
		return (ld);
	}
}



