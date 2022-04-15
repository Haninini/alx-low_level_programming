#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines
 *
 */

void print_line(int n)
{
	int i;
	
	while (n >= 0)
	{
		for (i = 1; i <=n; i++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
