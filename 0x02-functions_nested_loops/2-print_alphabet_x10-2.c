#include "main.h"

/**
 * print_alphabet_x10 -prints the letters of the alphabets 10 times
 *
 * Return: Void
 */

void print_alphabetx10(void)
{
	char i;
	int n = 0;

	while (n <= 9)
	{
		print_alphabet();
		n++;
	}
}
