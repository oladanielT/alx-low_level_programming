#include "main.h"
/**
 * _strcmp - function to compare strings
 * @s1: first strings
 * @s2: second strings
 * Return: expection 0 for success
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
