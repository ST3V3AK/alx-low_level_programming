#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the 16 hexadecimal numbers
 *
 * return - Always (0) success
 */
int main(void)
{
	int i = 0;
	char n = 'a';

	while (i < 10)
	{
		putchar(i);
		++i;
	}
	while (n <= 'f')
	{
		putchar(n);
		++n;
	}
	putchar('\n');
	return (0);
}
