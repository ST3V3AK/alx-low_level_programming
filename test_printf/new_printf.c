#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints to standard output
 * @str: input string
 *
 * Return: Number of characters in the input string
 */

int _printf(char *str, ... )
{
	va_list var;
	void *ptr;
	int i;
	int temp;
	const char *temp2;
	int n = strlen(str);

	va_start(var, str);
	for (i = 0; i < n; i++)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'd')
			{
				temp = va_arg(var, int);

				ptr = &temp;
				print_int(ptr);
			}
			else if (str [i + 1] == 's')
			{
				temp2 = va_arg(var, const char *);
				ptr = &temp;
				print_string(ptr);
			}
			else if (str [i + 1] == 'c')
			{
				temp2 = va_arg(var, const char *);a
				ptr = &temp;
				print_char(ptr);
			}
			else
			{
				return (1);
			}
			i = i + 1;
		}
		else
		{
			putchar(str[i]);
		}
	}
	va_end(var);
	return (i);
}
