#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers
 * @argc: the numebr of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 1 for non-negative, otherwise 0
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
