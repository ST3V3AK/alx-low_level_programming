#include "main.h"

/**
 * print_square - Prints a diagonal depending on input
 * @size: determines the dimensions of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j = size;

		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
