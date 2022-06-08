#include "main.h"

/*
 * main - Entry point
 *
 * Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int print_last_digit (int)
{
	int unit;
	unit = int % 10;
	if (unit >= 10)
	{
		unit = print_last_digit(unit);
	}
	return (unit);
}
