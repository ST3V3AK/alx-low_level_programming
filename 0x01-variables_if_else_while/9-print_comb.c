#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return - Always (0) success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
