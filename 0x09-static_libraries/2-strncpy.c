#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: destination
 * @src: source
 * @n: length od string to copy
 * Return: Alwaysa 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
