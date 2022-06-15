#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a string depending on the specified length
 * @a: pointer to array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		printf("%d", *(a + i));
		if (i < j - 1)
			printf(", ");
	}
	_putchar('\n');

}
