#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "3-calc.h"

/**
 * main - checks code
 * @argc: number of input strings
 * @argv: pointer to inout strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int result;
	int len;
	int n1;
	int n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	len = strlen(argv[2]);
	if (len  > 2)
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	result = (*ptr)(n1, n2);
	printf("%d\n", result);
	return (0);
}
