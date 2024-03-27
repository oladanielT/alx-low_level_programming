#include "main.h"
/**
 * _strpbrk - function to return a similar character
 * @s: string 
 * @accept: string to check
 * Return: ALways 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
