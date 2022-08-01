#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a character
 * @c: input character
 *
 * Return: void
 */

void print_char(void *p)
{
	putchar(*(char *)p);
}
