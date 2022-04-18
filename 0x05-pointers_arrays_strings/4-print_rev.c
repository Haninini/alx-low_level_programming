#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 *
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i <= 0; i--)
	{
		printf("%c", *(s+1));
	}
	printf("\n");
}
