#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  This function is the entry point.
*
* Return: This should always be 0 (successs).
*
* Description: If condition for printing.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
