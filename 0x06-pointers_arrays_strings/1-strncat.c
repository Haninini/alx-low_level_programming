#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string where we want to append
 * @src: the string from which n char are going to append
 * @n: number of char to be appended
 *
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s1 = dest;

	while (*s1 != '\0')
	{
		s1++;
	}

	while (n--)
	{
		if (!(*s1++ = *src++))
		{
			return (dest);
		}
	}
	*s1 = '\0';
	_putchar('\n');
	return (dest);
}


