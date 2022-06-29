#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Prints 1 to 100 and replaces 3, 5 and multiples
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0)
		{
			if (i % 5 != 0)
				printf("%d", i);
		}
		if (i % 3 == 0)
		{
			if (i % 5 != 0)
				printf("Fizz");
			else
				printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			if (i % 3 != 0)
				printf("Buzz");
			else
				printf("FizzBuzz");
		}
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
}

/**
 * main - check code
 *
 * Return: Always 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
