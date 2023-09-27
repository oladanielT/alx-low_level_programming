#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @src: memory area to be copied
 * @dest: memory to be copied to
 * @n: number of bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
