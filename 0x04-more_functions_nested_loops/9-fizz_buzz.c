#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Prints 1 to 100 and replaces 3, 5 and multiples
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i = 1;

	for (i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz");
		else if ((i % 3 != 0) && (i % 5 == 0))
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			_putchar(' ');
	}
	_putchar('\n');
}
