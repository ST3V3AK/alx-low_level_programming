#include "main.h"

/**
 * times_table -prints a 10 by 10 times table
 *
 * Return : Void
 */

void times_table(void)
{
	int n = 0;
	int i;
	int val;
	int tmp;

	while (n < 10)
	{
		i = 0;

		while (i < 10)
		{
			val = n * i;
			if (val < 10)
			{
				_putchar(val % 10 + '0');
			}
			else
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			tmp = n * (i + 1);

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (tmp < 10)
					_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		n++;
	}
}
