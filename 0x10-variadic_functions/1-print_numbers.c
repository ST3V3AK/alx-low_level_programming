#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints input numbers seperated by a character
 * @seperator: seperator
 * @n: number of inputs
 *
 * Return: voud.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%u", va_arg(arg, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		return;
	}
}
