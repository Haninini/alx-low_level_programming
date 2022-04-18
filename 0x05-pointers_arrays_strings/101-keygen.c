#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords for the program 
 * Return: 0
 */

int main(void)
{
	int x;

	srand((unsigned int)(time(NULL)));
	x = rand();
	
	printf("%i\n", x);

	return (0);
}
