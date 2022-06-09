#include "main.h"

/**
 * print_last_digit - Returns the last digit of any number
 * @n: input number
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int unit;

	unit = n % 10;
	if (unit >= 10)
	{
		unit = print_last_digit(unit);
	}
	return (unit);
}
