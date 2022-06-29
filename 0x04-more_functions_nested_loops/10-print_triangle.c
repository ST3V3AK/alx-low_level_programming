#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: determines age size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size <= 0)
		_putchar('\n');

	else if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			n = i;

			for (j = size - i; j > 0; j--)
				_putchar(' ');
			while (n > 0)
			{
				_putchar('#');
				n--;
			}
			_putchar('\n');
		}
	}
}
