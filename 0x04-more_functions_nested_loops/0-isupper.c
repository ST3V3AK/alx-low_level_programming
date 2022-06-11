#include "main.h"

/**
 * _isupper - Checks if char is in upper cases
 * @c: char to be checkef
 *
 * Return: 1 for success and 0 for failure
 */

int _isupper(int c)
{
	char i = c;

	if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);

}
