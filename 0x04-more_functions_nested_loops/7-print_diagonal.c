#include "main.h"

/**
 * print_diagnal - Prints a diagonal depending on input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int j = 0;

	if (n <= 0)
		_putchar('\n');

	for (int i, i <= n, i++)
	{
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar(""\"");
		_putchar('\n');
	}
}
