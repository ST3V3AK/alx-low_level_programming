#include "main.h"
#include <string.h>

/**
 * _strstr - checks for character in string
 * @s: input string
 * @c: input character
 *
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i;
	int n = strlen(haystack);

	for (i = 0; i < n - 1; i++)
	{
		if (*(haystack + i) == *needle)
		{
			p = &(*(haystack +i));
			return (p);
		}
		else 
		{
			return (0);
		}	
	}
}
