#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - combines two strings to form a new string
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *comb;
	int i = 0, j = 0;
	int n = 0;
	int m = 0;

	if (s1 != NULL)
		n = strlen(s1);
	if (s2 != NULL)
		m = strlen(s2);
	comb = (char *)malloc(sizeof(char) * (n + m));
	while (i < n)
	{
		*(comb + j) = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (i < m)
	{
		*(comb + j) = s2[i];
		j++;
		i++;
	}
	return (comb);
}
