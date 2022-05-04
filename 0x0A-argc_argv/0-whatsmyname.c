#include <stdio.h>

/**
 * main - display the name of the program
 * @argc: number of arguments
 * @argv: an array of pointers
 * Return: Always 0 (Success)
 */
int main (int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
