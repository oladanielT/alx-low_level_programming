#include <stdio.h>
/**
 * _strcat - function to concatenate two strings
 * @dest: String to return
 * @src: String to concatenate
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest++;
	}

	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
