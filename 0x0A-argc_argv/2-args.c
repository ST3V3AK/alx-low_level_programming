#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of input arguments
 * @argv: pointer to list of input arguments
 *
 * Return: Aleays 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
