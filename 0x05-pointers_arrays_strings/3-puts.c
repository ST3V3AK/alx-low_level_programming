#include "main.h"

/**
 * _puts - prints the string the on terminal
 * @n: stores the length of the string
 *
 * Return: void
 */

void _puts(char *str)
{;
	int n = _strlength(*str);
	int i;

	for (i = 0; i < n; i++)
		_putchar(msg[i]);
	_putchar('\n');
}
