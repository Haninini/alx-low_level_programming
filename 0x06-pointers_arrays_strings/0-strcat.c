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
	char sorce[20];
	char destin[20];
	int i = 0, j = 0;

	source = *src;
	destin = *dest;

	while (destin[i] != '\0')
	{
		++dest;
		i++;
	}

	while (source[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}

	return (*dest);
}


