#include <stdio.h>
#include <string.h>

/**
 * array_iterator - passes the elements of an array into a function
 * @array: input array
 * @size: size of the array
 * @action: input function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
