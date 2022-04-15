#include "main.h"

/**
 * print_most_numbers - print the number 0 to 9
 *
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			x++;

		_putchar(i + '0');
	}
	_putchar('\n');
}
