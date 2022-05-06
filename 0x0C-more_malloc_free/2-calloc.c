#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory to an array
 * @nmemb: memory of an array
 * @size: byte of an array
 * Return: NULL if fail, 0 otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *filler;
	unsigned int index;

	if (memo == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	filler = memo;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memo);
}
