#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to ninety eight
 *
 * @n - number given to start from printing
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
			printf("%d\n", 98);
		}
	}
	else if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
			printf("%d\n", 98);
		}
	}
}
