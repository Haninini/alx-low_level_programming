#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: The string which will be copied
 * @n: The first n character copied from src to dest
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

