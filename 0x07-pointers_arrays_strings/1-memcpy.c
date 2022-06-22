#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to destination string
 * @src: poimter to source string
 * @n: number of bytes to be copied
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return(dest);
}
