#include <stdio.h>
/**
* main -  This function is the entry point.
* Return: This should always be 0 (successs).
* Description: Numbers with commas and space for printing.
*/

int main(void)
{
	 int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
