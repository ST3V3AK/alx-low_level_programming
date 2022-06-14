#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @c: tempoary variable
 *
 * Return: void
 */

void swap_int(int *a, int*b)
{
	int c = *a;
	*a = *b;
	*b = c;
	_putchar('\n');
}
