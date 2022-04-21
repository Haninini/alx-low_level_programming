#include "main.h"

/** _strncpy - copies a string
 * @dest: destination where the content is to be copied
 * @src: the source string which will be copied
 * @n: the first n char to be copied from src to dest
 *
 * Return: the sestination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y + 1] = src[y];
	}
	dest[y + 1] = '\0';

	return (dest);
}

