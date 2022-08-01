#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints integers
 * @num: input number
 *
 * Return: void
 */

void print_int(void *number)
{
	void *p;
	int num = *((int *)number);
	int x;
	int y;

	if (num < 0)
	{
		num = num * -1;
		putchar('-');
	}
	x = num % 10;
	num = num - x;
	if (num >= 10)
	{
		y = num / 10;
		p = &y;
		print_int(p);
	}
	putchar(x + '0');
}
