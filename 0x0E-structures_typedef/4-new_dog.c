#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the 
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: the buffer storing the string copy
 * @src: the source string
 *
 * Return: the pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);

	newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newd->name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}

	newd->name = _strcopy(newd->name, name);
	newd->age = age;
	newd_>owner = _strcopy(newd->owner, owner);

	return (newd);
}
