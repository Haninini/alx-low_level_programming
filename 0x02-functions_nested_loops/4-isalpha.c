#include "main.h"

/**
 * _isalpha - checkes for alphabetic character
 *
 * @c: the character  given lto be checked 
 * Return: 1 if the letter is lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

