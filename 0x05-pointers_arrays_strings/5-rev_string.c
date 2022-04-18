#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string given as parameter
 *
 */

void rev_string(char *s)
{
	int leng, c, i;
	char *b, *e, temp;
	leng = 0;

	b = s;
	e = s;

	for (i = 0; s[i]; i++)
	{
		leng++;
	}

	for (c = 0; c < (leng - 1); c++)
		e++;

	for (c = 0; c < leng/2; c++)
	{
		temp = *e;
		*e = *b;
		*b = temp;

		b++;
		e--;
	}
}	
