#include <stdio.h>
/**
* main -  This function is the entry point.
* Return: This should always be 0 (successs).
* Description: Single digits to base 10 from 0 for printing.
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
