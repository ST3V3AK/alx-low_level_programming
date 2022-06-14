#include "main.h"
#include <string.h>

/**
 * rev_string - Prints tge string in reverse
 * @msg1: stores the input string
 * @rev: stores ouput string
 * @n: stores the length of msg
 *
 * Return: void
 */

void print_rev(char *s)
{
	char msg1[],rev[];
	msg[] = *s;
	int n = _strlen(msg);
	int i = 0;

	while (n > 0)
	{
		rev[i] =  msg[n];
		n--;
		i++;
	}
	*s = rev;
	_putchar('\n');

}
