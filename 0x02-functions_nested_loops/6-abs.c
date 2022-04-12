#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @x : number to be computed
 * Return: the value
 */

int _abs(int x)
{
	if (x < 0)
		x = (-1) * x;

	return (x);
}
