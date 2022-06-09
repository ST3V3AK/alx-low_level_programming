#include "main.h"

/**
 * print_sign - Shows if a number is positive or negative
 * @n: number
 *
 * Return: 1 if positive, 0 if n is equal to zero and -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
