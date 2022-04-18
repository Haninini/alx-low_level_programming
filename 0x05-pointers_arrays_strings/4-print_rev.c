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

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", *(s+i));
	}
	printf("\n");
}
