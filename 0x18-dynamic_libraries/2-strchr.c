#include "main.h"
/**
 * _strchr - Entry point
 * @s: strings
 * @c: character to check
 * Return: c if there
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
