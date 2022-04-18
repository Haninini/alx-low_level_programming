#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string given as parameter
 *
 */

void rev_string(char *s)
{
	char revs[10];
	char *revp = revs;
	int i = -1;

	while (*s)
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		s--;
		*revp = *s;
		revp++;
		--i;
	}
	*revp = '\0';
	*s = *revp;
}

