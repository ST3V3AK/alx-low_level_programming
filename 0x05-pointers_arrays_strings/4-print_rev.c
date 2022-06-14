#include "main.h"

/**
 * print_rev - Prints tge string in reverse
 * @msg: stores the inout string
 * @n: stores the length of msg
 *
 * Return: void
 */

void print_rev(char *str)
{
	char msg[] = *str;
	int n = _strlen(msg);
	int i;

	for (i = n; i > 0; i--)
		_putchar(msg[i]);
	_putchar('\n');

}
