#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from zero to nine
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	
	putchar('\n');

	return (0);
}
