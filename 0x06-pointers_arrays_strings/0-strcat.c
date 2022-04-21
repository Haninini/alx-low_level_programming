#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to be concatinated
 * @src: the string to be append
 *
 * Return: the string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

