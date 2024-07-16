#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array.
 * @array: pointer to the first element of the array.
 * @size: number of element in the array.
 * @value: value to search.
 * Return: index of value or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (array == NULL || size == 0)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
			return (i);
		i++;
	};

	return (-1);
}
