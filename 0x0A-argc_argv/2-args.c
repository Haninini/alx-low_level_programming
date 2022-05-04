#include <stdio.h>

/**
 * main - prints all arguments it received
 * @argc: number of arguments given to the program
 * @argv: an array of pointers to the argument
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
