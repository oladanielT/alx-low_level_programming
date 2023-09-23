#include <stdio.h>
/**
 * _strcat - function to concatenate two strings
 * @dest: String to return
 * @src: String to concatenate
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{

	while(*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
