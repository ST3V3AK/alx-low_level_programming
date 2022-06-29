#include <stdio.h>

/**
 * prime_factor - prints the highest prime factor
 * @num: number
 *
 * Return: void
 */

void prime_factor(unsigned long int num)
{
	unsigned long int i;

	if (num <= 0)
	{
		return;
	}
	else
	{
		for (i = 2; i < num; i++)
		{
			while (num % i == 0)
			{
				if (i != num)
					num = num / i;
				else
					break;
			}
		}
		printf("%lu\n", num);
	}
}

/**
 * main - checks code
 *
 * Return: Always 0
 */

int main(void)
{
	prime_factor(612852475143);
	return (0);
}
