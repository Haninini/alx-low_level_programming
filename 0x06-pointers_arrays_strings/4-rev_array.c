#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array defined
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int *ae = (a + n - 1);

	while (a <= ae)
	{
		_putchar(*a + '0');
		a++;
	}
}




