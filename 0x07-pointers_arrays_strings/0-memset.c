#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: address to be filled
 * @b: constant byte
 * @n: number of bytes
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
