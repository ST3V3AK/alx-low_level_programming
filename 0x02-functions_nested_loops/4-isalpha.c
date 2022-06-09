#include "main.h"

/**
 * _isalpha - Checks if input is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 if true and 0 if its not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
