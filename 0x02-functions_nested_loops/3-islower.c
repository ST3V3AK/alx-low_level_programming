#include "main.h"

/**
 * _islower -Checks if input is an alphabet in lowercase
 * @c: the input character entered by the user
 *
 * Return: 1 when true and 0 when false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
