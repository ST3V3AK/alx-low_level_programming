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

	while (n < 10)
	{
		i = 0;

		while (i < 10)
		{
			val = n * i;
			if (val < 10)
			{
				_putchar(val % 10 + '10')
			}
			else
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '10')
			}
			if ((val > 10) && (i < 9))
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((val < 10) && (i < 9))
			{
				_putchar(',');
				_pitchar(' ');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		n++;
	}
}
