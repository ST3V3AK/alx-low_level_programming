#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					if (a + b < c + d)
					{
						putchar(a % 10 + '0');
						putchar(b % 10 + '0');
						putchar(' ');
						putchar(c % 10 + '0');
						putchar(d % 10 + '0');
						if (a + b != 17)
						{
							putchar(',');
							putchar(' ');
						}
					}
					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
