#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - a characters in a string to upper case
 * @s: input string
 *
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	char c;
	int i;
	char *out;
	int n = strlen(s) - 1;

	for (i = 0; i < n; i++)
	{
		c = *(s + i);
		printf("c: %c %d", c, c);
		if (c >= 65)
		{
			if (c <= 90)
			{
				*(s + i) = c + 32;
				printf("c: %c %d\ns[%d] = %c\n", c, c, i, *(s + i));
				printf("%d\n", i);
			}
		}
		printf("%d\n", i);
	}
	out = s;
	return (out);
}
