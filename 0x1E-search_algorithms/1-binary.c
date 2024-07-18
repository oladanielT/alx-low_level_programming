#include <stdio.h>
#include "search_algos.h"

/**
 * print_text - print an array;
 * @array: what to print
 * @l: low
 * @h: high
 * Return: Array
 */

void print_text(int *array, int l, int h)
{
	int i;

	for (i = l; i <= h; i++)
	{
		printf("%d", array[i]);
		if (i < h)
			printf(", ");
	};
	printf("\n");
}


/**
 * binary_search - function that searches for a value.
 * @array: pointer to first element of the array.
 * @size: number of element in the array.
 * @value: value to search.
 * Return: index of element to search, and -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int l, h, mid;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	l = 0;
	h = (int)(size) - 1;
	while (l <= h)
	{
		mid = l + (h - l) / 2;
		printf("Searching in array: ");
		print_text(array, l, h);
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			h = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
