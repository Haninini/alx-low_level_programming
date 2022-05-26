#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: the number given
 * @m: number to flip n to
 * Return: the necessary number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xy = n ^ m, bits = 0;

	while (xy > 0)
	{
		bits += (xy & 1);
		xy >>= 1;
	}

	return (bits);
}
