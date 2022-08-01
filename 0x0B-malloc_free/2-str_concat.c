#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings and saves in a new memory
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new memory.
 */

char *str_concat(char *s1, char *s2)
{
	char *copy;
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;

	if (s1 != NULL)
	{
		m = strlen(s1);
	}
	if (s2 != NULL)
	{
		n = strlen(s2);
	}

	copy = malloc(sizeof(char) * (n + m + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < m)
		{
			*(copy + i) = s1[i];
			i++;
		}
		while (j < n)
		{
			*(copy + i) = s2[j];
			i++;
			j++;
		}
		return (copy);
	}
}
