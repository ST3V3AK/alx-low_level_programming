#include "main.h"

/**
 * _pow_recursion - calculates  x to the power of y
 * @x: number
 * @y: power
 *
 * Return: x * x, y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
