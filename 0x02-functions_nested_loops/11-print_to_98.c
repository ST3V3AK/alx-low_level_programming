#include "main.h"

/**
 * print_to_98 -Prints from input number to 98
 * @num: input number
 *
 * Return: void
 */

void print_to_98(int num)
{
	int n = num;
	int i = num;

	while (n <= 98)
	{
		if (n < 10)
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		if (n <  98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	i = num;
	
	while (i >= 98)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		if (i > 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		i--;
	}
}
