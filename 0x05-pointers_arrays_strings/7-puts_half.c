#include "main.h"

/**
 * puts2lf - Prints half of a string
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

	for (i = n / 2; i < n; i++)
	{
		_putchar(msg[i]);
	_putchar('\n');

}
