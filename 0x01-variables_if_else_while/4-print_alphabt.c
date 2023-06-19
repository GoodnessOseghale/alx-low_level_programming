#include <stdio.h>
/**
* main -  This function is the entry point.
* Return: This should always be 0 (successs).
* Description: While  condition for printing.
*/

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
