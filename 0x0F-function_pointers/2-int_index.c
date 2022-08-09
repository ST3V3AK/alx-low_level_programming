#include <stdio.h>

/**
 * int_index - compaes integers and returns the index
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to comparison functions
 *
 * Return: index of the number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int  n;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		n = (*cmp)(array[i]);
		if (n != 0)
			return (i);
		i++;
	}
	return (-1);
}
