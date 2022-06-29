#include <stdio.h>

/**
 * main - prints the first 50 fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long long int f1;
	unsigned long long int i = 0;
	unsigned long long int f = 1;
	unsigned long long int fprev = 0;

	while (i < 98)
	{
		f1 = f;
		f += fprev;
		printf("%llu", f);
		fprev = f1;
		if (i != 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
