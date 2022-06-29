#include <stdio.h>

/**
 * main - prints the first 50 fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int f1;
	unsigned long int i = 0;
	unsigned long int f = 1;
	unsigned long int fprev = 0;

	while (i < 50)
	{
		f1 = f;
		f += fprev;
		printf("%lu", f);
		fprev = f1;
		if (i != 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
