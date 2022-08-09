#include <stdio.h>
#include <string.h>

/**
 * print_name - calls a function that prints a string
 * @name: string
 * @f: pointr to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
	else 
		putchar('\n');
}
