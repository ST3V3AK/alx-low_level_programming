#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return - Always (0) success
 */
int main(void)
{
	char n = 'a';
	char i = 'A';

	while (n <= 'z')
	{
		putchar(n);
		++n;
	}
	while (i <= 'Z')
	{
		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
