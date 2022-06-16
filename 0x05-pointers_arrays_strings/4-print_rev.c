#include "main.h"
#include <string.h>

/**
 * print_rev - Prints the string in reverse
 * @str: input pointer to string
 *
 * Return: void
 */

void print_rev(char *str)
{
	int n = strlen(str);
	int i;

	for (i = n; i >= 0; i--)
		_putchar(*(str + i));
	_putchar('\n');

}
