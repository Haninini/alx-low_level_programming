#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to ninety eight
 *
 * @n - number given
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
