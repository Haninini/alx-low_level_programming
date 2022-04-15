#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k, l;

	i = 0;
	l = 0;

	while (i < 10)
	{
		while (l <= 14)
		{
			if (l < 10)
			{
				j = l;
			}
			else
			{
				j = l / 10;
				k = l % 10;
				_putchar(j + '0');
			}
			_putchar(k + '0');
			l++;
		}
		i++;
		l = 0;
		_putchar('\n');
	}
}
