#include "main.h"

/**
 * _isdigit - Checks if char is a digit
 *
 * Return: 1 for success and 0 for failure
 */

int _isdigit(int c)
{
	char i = c;

	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
