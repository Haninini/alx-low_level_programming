#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: the string to print out to stdout
 */
void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
