#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string to check
 * @c: character to locate
 * Return: string matched with the character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
