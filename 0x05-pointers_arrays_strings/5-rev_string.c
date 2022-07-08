#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Prints thpe string in reverse
 * @s: pointer to string
 *	
 * Return: void
 */

void rev_string(char *s)
{
	char *tmp = s;
	int n = strlen(s) - 1;
	int i = 0;

	strcpy(tmp, s);
	while (n >= 0)
	{
		s[i] = tmp[n];
		printf("s[%d] = %c, tmp[%d] = %c\n", i, s[i], n, tmp[n]);
		n--;
		i++;
	}
}
