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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int i;
		int j;

		arr = (int **)malloc(sizeof(int *) * height);
		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < width; i++)
				arr[i] = (int *)malloc(sizeof(int) * width);
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
		}	
		return (arr);
	}
}
