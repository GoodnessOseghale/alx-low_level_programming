#include <stdio.h>
/**
* main -  This function is the entry point.
* Return: This should always be 0 (successs).
* Description: While  condition for printing.
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%u", n);
	}
	printf("\n");
	return (0);
}
