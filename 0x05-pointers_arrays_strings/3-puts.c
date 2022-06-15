#include "main.h"

/**
 * _puts - prints the string the on terminal
 * @str: input pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
