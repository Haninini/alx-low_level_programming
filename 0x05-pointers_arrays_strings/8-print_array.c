#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of integers
 * @a: array of integer
 * @n: the number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n-1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
