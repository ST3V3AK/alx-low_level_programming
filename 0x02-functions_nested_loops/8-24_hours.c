#include "main.h"

/**
 * jack_bauer -prints the 24 hours of  the day
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int n = 0;
	int i;

	while (n < 24)
	{
		i = 0;

		while (i < 60)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
			i++;
		}
		n++;
	}
}
