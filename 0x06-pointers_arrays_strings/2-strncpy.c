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
	char *s1 = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'
	return (dest);
}
