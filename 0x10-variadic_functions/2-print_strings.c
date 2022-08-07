#include <stdio.h>
#include <string.h>

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print n number of strings connected by a seoarator
 * @separator: separator
 * @n: number of strings
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(str);
}
