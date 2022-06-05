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

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				if (a <= b && b <= c && a != b && b != c)
				{
					putchar(a % 10 + '0');
					putchar(b % 10 + '0');
					putchar(c % 10 + '0');
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
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
