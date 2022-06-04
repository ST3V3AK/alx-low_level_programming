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

	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
			putchar(n);
		++n;
	}
	putchar('\n');
	return (0);
}
