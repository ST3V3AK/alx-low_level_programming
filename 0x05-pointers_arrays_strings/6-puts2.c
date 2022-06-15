#include "main.h"
#include <string.h>

/**
 * puts2 - Prints even indexed element in a string
 * @s: pointer to string
 *
 * Return: void
 */

void puts2(char *s)
{
	int n = strlen(s);
	int i;

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			_putchar(*(s + i));
	}
	_putchar('\n');
}
