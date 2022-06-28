#include "main.h"

/**
 * print_times_table - prints n  x n times tabes
 * @n: number
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int val;
	int tmp;
	int tmp1;

	if (n >= 0 && n <= 15)
	{	
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				val = i * j;
				if (val >= 100)
					_putchar(val / 100 + '0');
				if (val >= 10)
				{
					tmp = val % 100;
					_putchar(tmp / 10 + '0');
				}
				_putchar(val % 10 + '0');
				tmp1 = i * (j + 1);

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if (tmp1 < 100)
					{
						_putchar(' ');
						if (tmp1 < 10)
							_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
