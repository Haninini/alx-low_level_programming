#include <stdio.h>

/**
 * main - print numbers combination
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		if (x != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
