#include "main.h"

/**
<<<<<<< HEAD
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: constant byte
 * @n: memory are
 * Return: pointer to a memory area s
=======
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: a pointer to memory area s
>>>>>>> c94d9f1a056202fb2f562853ed19a49b475cac53
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
