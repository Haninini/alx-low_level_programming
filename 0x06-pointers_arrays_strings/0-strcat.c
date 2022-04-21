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

	int x, j;

	x = 0;

	while (dest[x])
		x++;
	for (x = 0; src[j]; j++)
		dest[x++] = src[j];

	return (dest);
}
