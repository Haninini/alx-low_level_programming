#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of argument given
 * @agrv: an array of pointers to the arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}

	return (0);
}
