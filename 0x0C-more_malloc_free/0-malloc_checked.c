#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: the number of bytes to be allocated
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
		exit(98);

	return (memo);
}
