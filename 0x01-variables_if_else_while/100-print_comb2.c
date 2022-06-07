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
	int n = 0;
	int i = 0;

	while (n < 10)
	{
		while (i < 10)
		{
			if (n < i)
			{
				putchar(n % 10 + '0');
				putchar(i % 10 + '0');
				if (n + i != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		i = 0;
		n++;
	}
	putchar('\n');
	return (0);
}
