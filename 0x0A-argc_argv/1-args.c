#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of commands
 * @argv: pointer to list of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n = argc - 1;

	(void)argv;
	printf("%d\n", n);
	return (0);
}
