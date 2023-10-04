#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
