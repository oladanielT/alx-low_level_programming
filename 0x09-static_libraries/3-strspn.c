#include "main.h"
/**
 * _strspn - function to check the number of related items
 * @s: string to check
 * @accept: other string to check
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
