#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; J++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
