#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of the string
 * @str: the string given
 */

void puts_half(char *str)
{
	int i, e;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	e = (i + 1) / 2;

	for (i = e; str[i]; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
