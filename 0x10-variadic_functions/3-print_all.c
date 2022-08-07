#include <stdarg.h>

#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints the refeence to a list of arguments
 * @format: list of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *str, *sp = "";
	int i = 0;

	va_start(arg, format);
	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sp, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%i", sp, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sp, str);
				break;
			default:
				i++;
				continue;
		}
		sp = ", ";
		i++;
	}
	va_end(arg);
	putchar('\n');
}
