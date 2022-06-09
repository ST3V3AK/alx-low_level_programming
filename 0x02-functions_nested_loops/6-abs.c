#include "main.h"

/**
 * _abs - returns the absolute value n
 * @n: input number
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
