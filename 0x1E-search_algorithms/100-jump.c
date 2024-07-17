#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function to search for the index ofan element.
 * @array: list of elements
 * @size: number of elements in the array
 * @value: value to search.
 * Return: -1 if not found and index of the value if found.
 */


int jump_search(int *array, size_t size, int value)
{
	int step = (int) sqrt(size);
	int left = 0;
	int i;
	int right = step - 1;
	
	while (right < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		if (array[right] >= value)
		{
			for (i = left; i <= right; ++i)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return i;
			}
			return -1;
		}
		
		left = right + 1;
		right = right + step;
		
		if (right >= (int)size)
			right = size - 1;
	}
	for (i = left; i < (int)size; ++i)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	
	return -1;
}
