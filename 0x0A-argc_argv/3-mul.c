#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: number of inputs arguments
 * @argv: list of input arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int prod = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			prod *= atoi(argv[i]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
