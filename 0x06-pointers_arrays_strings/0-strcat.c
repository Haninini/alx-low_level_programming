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
	int i, j, k = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		k += 1;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[k + j] = src[j];
	}
	dest[k + j] = '\0';
	return (dest);
}
