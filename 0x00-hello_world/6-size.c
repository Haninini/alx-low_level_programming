#include <stdio.h>

int main (void)
{
	char x;
	int i;
	long int y;
	long long int z;
	float a;

	printf("Size of a char:%lu. \n" (unsigned long) sizeof(x));
	printf("Size of an int:%lu. \n" (unsigned long) sizeof (i));
	printf("Size of a long int:%lu. \n" (unsigned long) sizeof(y));
	printf("Size of a long long int:%lu. \n" (unsigned long) sizeof(z));
	printf("Size of a float:%lu. \n" (unsigned long) sizeof(a));

	return(0);
}

