#include "main.h"

/**
 * print_alphabet_x10 -prints the letters of the alphabets 10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n <= 9)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		n++;
		_putchar('\n');
	}
}
