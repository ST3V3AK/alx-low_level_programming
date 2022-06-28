#include <stdio.h>

/**
 * main - prints the first 50 fibonnacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int f1;
	int i = 0;
	int f = 1;
	int fprev = 0;

	while (i < 50)
	{
		f1 = f;
		f += fprev;
		printf("%d", f);
		fprev = f1;
		i++;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
}
