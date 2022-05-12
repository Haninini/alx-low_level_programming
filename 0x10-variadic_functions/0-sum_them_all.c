#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: numbers to be add
 * Return: If n == 0, return 0 otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list ad;
	unsigned int i, sum = 0;

	va_start (ad, n);
	
	for (i = 0; i < n; i = i++)
		sum += va_arg(ad, int);

	va_end(ad);
	
	return (sum);
}
		
