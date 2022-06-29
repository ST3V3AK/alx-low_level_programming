#include <stdio.h>

/**
 * main - prints the first 50 fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int f1;
	unsigned int f = 1;
	unsigned int fprev = 0;

	while (f <= 4000000)
	{
		f1 = f;
		f += fprev;
		fprev = f1;
		if (f % 2 == 0)
		{
			printf("%u", f);
			if (f + fprev  <= 4000000)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
