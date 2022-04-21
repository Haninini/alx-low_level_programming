#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: destination string
 * @src: source of the string
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{

	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		for (y = 0; src[y] != '\0'; y++)
		{
			dest[x] = src [y];
			x++;
		}
	}

	*dest = '\0';
	_putchar('\n');

	return (dest);
}
