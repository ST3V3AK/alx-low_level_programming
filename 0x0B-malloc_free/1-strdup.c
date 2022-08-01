#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - creates a copy of a string
 * @str: input string
 *
 * Return: pointer to the copy of the string
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		n = strlen(str);
		copy = (char *)malloc(sizeof(char) * n);
		for (i = 0; i < n; i++)
			copy[i] = *(str + i);
	}
	printf("%ld\n", sizeof(*copy));
	return (copy);
}
