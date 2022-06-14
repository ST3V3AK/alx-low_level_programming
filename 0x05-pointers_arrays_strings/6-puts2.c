#include "main.h"

/**
 * puts2 - Prints even indexed element in a string
 * @msg: stores the inout string
 * @n: stores the length of msg
 *
 * Return: void
 */

void puts2(char *s)
{
	char msg[] = *s;
	int n = _strlen(msg);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			_putchar(msg[i]);
		else if (i % 2 == 0)
			_putchar(msg[i]);
	}
	_putchar('\n');

}
