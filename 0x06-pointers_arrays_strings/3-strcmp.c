#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the other sting to be compared
 *
 * Return: the comparison result 0 equal 1 or -1 unequal
 */

int _strcmp(char *s1, char *s2)
{
	int status;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	status = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;
	return (status);
}
