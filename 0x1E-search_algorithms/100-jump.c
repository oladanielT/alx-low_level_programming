#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted array
 * @array: array of elements to search
 * @size: numbers of ment in array
 * @value: value to search
 * Return: value if found or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int i, j;
	int l = 0;
	int step = sqrt((int)(size));
	int h = step - 1;

	if (!array || size == 0)
		return (-1);
	while (j < (int)(size))
	{
		printf("Value checked array[%d} = [%d]\n", l, array[l]);
		for (i = l; i <= h; i++)
		{
			if (array[i] == value)
				return (i);
		}
		l = h + 1;
		h = h + step;

		if (h >= (int)(size))
			return (-1);
		j++;
	}

	return (-1);
}
