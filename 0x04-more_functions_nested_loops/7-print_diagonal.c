#include "main.h"

/**
 * print_diagonal - Prints a diagonal depending on input
 * @n: determines the length of the diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		int j = i - 1;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
