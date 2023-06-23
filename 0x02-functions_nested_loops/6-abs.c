#include "main.h"
/**
 * _abs -  computes the absolute value of an integer.
 *
 * @a: The input as an integer.
 *
 * Return: Absolute value.
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
	_putchar('\n');
}
