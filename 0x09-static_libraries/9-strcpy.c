#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: the string to copy
 * @dest: the buffer to copy to
 * Return: the string str
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
