#include <stdio.h>

/*
 * main - print letters except q and e
 *
 * Description: the letters are prented except q and e
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
