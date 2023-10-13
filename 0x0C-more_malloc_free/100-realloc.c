#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size of the allocated memory ptr
 * @new_size: is the new size of the new memory to be allocated
 * Return: Alway 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	unsigned int min_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (old_size == new_size)
	{
		return (ptr);
	}

	min_size = (old_size < new_size) ? old_size : new_size;

	new_ptr = realloc(ptr, new_size);

	if (new_ptr == NULL)
	{
		return (ptr);
	}
	for (i = 0; i < min_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}


