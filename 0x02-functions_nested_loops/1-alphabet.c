#include "main.h"
/**
 * print_alphabet - Prints alphabet lowercase.
 * 
 * Return: Always 0(success).
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
