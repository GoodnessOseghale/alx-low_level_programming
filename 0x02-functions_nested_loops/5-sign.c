#include "main.h"
/**
 * print_sign - shows + if the input is greater than zero, 0 if its zero
 * and - if its less than zero.
 *
 *@n: The input as an integer.
 *
 * Return: 1 for greater than zero. 0 for zero. -1 for less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
