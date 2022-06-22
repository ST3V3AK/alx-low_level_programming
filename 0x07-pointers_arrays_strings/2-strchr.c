#include "main.h"
#include <string.h>

/**
 * _strchr - returns a pointer to the first occurrence of the char
 * @s: pointer to input string
 * @c: referencd character
 *
 * Return: a pointer to a character in a string
 */

char *_strchar(char *s, char c)
{
	char *found = NULL;
	int n = strlen(s);
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(s + i) == c)
		{
			found = &*(s + i);
		}
	}
	return (found);
}
