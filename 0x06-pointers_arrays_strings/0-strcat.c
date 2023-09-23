#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - function to concatenate two strings
 * @dest: String to return
 * @src: String to concatenate
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
