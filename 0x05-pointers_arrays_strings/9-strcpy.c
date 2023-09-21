#include "main.h"
/**
 * _strcpy - unction that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to the destination
 * @src: pointer where we want to copy from
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
