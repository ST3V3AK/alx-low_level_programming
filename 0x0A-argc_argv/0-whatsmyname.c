#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: number of input commands
 * @argv: array of pointers to commands
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n",argv[0]);
	return (0);
}
