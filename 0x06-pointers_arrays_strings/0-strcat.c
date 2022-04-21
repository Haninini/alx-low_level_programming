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

	for (x = 0; *dest != '\0'; x++, dest++);
	for (j = 0; *src != '\0'; j++, dest++, src++)
		*dest = *src;
		*dest = '\0';
		dest = dest - x - j;
		return (dest);
}
