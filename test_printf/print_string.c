#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_string - prints a string
 * @str: input string
 *
 * Return: void
 */

void print_string(char *str)
{
	int i;
	int n = strlen(str);

	for (i = 0; i < n; i++)
		putchar(str[i] );
}
