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
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";

	srand((unsigned int)(time(NULL)));
	x = rand();
	for (int i = 0; i < 5; i++)
	{
	  printf("%c", list[rand() % (sizeof list - 1)]);
	}
	
	/*printf("%i\n", x);*/

	return (0);
}
