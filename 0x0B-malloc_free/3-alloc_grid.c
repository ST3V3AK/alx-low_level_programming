#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimentional array of size width*height
 * @width: the number of columns in the array
 * @height: the number of rows in the array
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **arr;

	if (width == 0 && height == 0)
	{
		return (NULL);
	}
	else
	{
		int i;

		arr = (int **)calloc(height, sizeof(int *));
		for (i = 0; i < width; i++)
			arr[i] = (int *)calloc(width, sizeof(int));
		return (arr);
	}
}
