#include "main.h"

/**
 *
 * @c: the character to be checked
 *
 * Return: 1 if the character is lower 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

