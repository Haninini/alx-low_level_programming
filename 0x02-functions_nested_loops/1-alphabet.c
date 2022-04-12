#include "main.h"

/**
 * main - print alphabet function
 *
 * description -print small case alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
