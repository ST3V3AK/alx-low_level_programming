#include "main.h"
#include <string.h>

/**
 * print_rev_recursion - prints a string in reverse
 * @s: input string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int n = strlen(s) - 1;
	char rev;

	rev = *(s + n);
	if (rev == *s)
		_putchar('\n');
		return;
	_putchar(rev);
	_print_rev_recursion(s - 1);
}
