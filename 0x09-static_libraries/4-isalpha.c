#include "main.h"
#include <unistd.h>

/**
 * _isalpha - checkes whether the passed char is an alphabet
 * @c: the char to check
 *
 * Return: 1 if c is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
