#include <stdio.h>

/**
 * main - integer input char output
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for(x = 0; x <= 9; x++)
		putchar('0' + x);

	putchar('\n');

	return (0);
}

