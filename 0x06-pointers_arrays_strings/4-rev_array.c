#include "main.h"

/**
 * reverse_array - Reverses the elements of an array
 * @a: array
 * @n: number of elements in a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = n;
	int j = 0;

	while(i > 0)
	{
		if (a[i] != '\0')
		{
			a[j] = a[i];
			j++;
		}
		i--;
	}
}
