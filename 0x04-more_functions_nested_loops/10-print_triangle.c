#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: determines age size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int j;
	int n;

	if (size <= 0)
		_putchar('\n');

	for (int i = 1; i <= size; i++)
	{
		j = size - i;
		n = i;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		/*Another while loop*/
		while (n > 0);
		{
			_putchar('#');
			n--;
		}
		_putchar('\n');
	}
}
