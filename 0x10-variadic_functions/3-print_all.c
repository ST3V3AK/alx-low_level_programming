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
	char *str;
	int n;
	int i;

	va_start(arg, format);

	i = 0;
	while (format[i])
	{
		n = strlen(format) - 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
				{
					printf("(nil)");
					continue;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i] != format[n])
			printf(", ");
		i++;
	}
	va_end(arg);
	putchar('\n');
	return;
}
