#include "main.h"

/**
 * more_numbers- prints 1 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n = 0;

		while (n < 14)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
	}
}
