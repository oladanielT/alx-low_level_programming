#include "main.h"
/**
 * _strcpy - function to copy from one place to another
 * @dest: destination
 * @src: source of the message
 * Return: copied content
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	for (; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
