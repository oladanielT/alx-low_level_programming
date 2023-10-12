#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for an array using malloc
 * @nmemb: Array
 * @size: size of the array
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total;
	void *result;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = (size_t)nmemb * size;
	result = calloc(total, size);

	if (result == NULL)
	{
		return (NULL);
	}

	return (result);
}
