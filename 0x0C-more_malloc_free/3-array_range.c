#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - fnction that creates an array of integer
 * @min: minimum number of the array
 * @max: maximum number of the array
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *array = (int *)malloc((max - min + 1) * sizeof(int));
	int i;

	if (min > max)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return array;
}
