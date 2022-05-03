#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and intialize with a specific char
 * @size: the size of the memory
 * @C: the character to be intialized
 * Return: if size == 0 or the function fails - Null. otherwise pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (Null);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
