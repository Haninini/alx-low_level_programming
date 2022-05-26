#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 *         0 if one or more chars in the string b that is not 0 or
 *         1 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int y, b_two;

	if (!b)
		return (0);
	x = 0;

	for (y = 0; b[y] != '\0'; y++)
		;
	for (y--, b_two = 1; y >= 0; y--, b_two *= 2)
	{
		if (b[y] != '0' && b[y] != '1')
		{
			return (0);
		}
		if (b[y] & 1)
		{
			x += b_two;
		}
	}
	return (x);
}
