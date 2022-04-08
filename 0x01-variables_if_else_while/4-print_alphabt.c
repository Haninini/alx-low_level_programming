#include <stdio.h>

/*
 * main - print small leters
 *
 * Description: Print lower case alphabet exclusing letters q and e
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
