#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -Prints from input number to 98
 * @num: input number
 *
 * Return: void
 */

void print_to_98(int num)
{
	int n = num;
	int i = num;

	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}

	while (i > 98)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
		i--;
	}

	if (n == 98 || i == 98)
		printf("%d\n", 98);
}
