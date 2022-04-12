#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int x, i;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 10; x++)
		{
			x = x * i;
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
