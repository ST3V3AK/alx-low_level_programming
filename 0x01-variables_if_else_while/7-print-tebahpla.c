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
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		--n;
	}
	putchar('\n');
	return (0);
}
