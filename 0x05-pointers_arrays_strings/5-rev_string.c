#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: string to reverse
 * Return: Always 0;
 */

void rev_string(char *s)
{
	int i, l;
	char c;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
}
