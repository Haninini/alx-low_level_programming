#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int x, i, z;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (x = 0; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			z = i * x;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}

}
