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
	int m, i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}

	dest[m + i] = '\0';
	return (dest);
}


