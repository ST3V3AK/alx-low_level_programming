#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @s: pointer to string
 *
 * Return: void
 */

void puts_half(char *s)
{
	int n = strlen(s);
	int i;

	for (i = n / 2; i < n; i++)
	{
		if (n % 2 == 0)
			_putchar(*(s + i));
		else if (n % 2 == 1 && i < n - 1)
			_putchar(*(s + i + 1));
	}
	_putchar('\n');
}
