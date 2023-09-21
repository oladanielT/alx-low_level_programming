#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that return the length of a string
 * @s: pointer to return it's length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
