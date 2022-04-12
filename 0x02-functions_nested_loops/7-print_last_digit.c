#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @x: the given number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	if (x < 0)
		x = x * -1;
	_putchar((x % 10) + '0');
	
	return (x % 10);
}



