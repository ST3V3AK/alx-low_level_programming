#include "main.h"

/*
 * main - Entry point
 *
 * Prints _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet (void)
{
	char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		_putchar(\n);
		i++;
	}
}