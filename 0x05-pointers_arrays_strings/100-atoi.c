#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: string to convert
 * Return: Always 0
 */
int _atoi(char *s)
{
	unsigned int a = 0, b = 0, c = 0, d = 1, f = 1, i;
	
	while (s[a] != '\0')
	{
		if (b > 0 && (s[a] < '0' || s[a] > '9'))
		break;
		if (s[a] == '-')
		d *= -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
		if (b > 0)
		{
		f *= 10;
		}
		b++;
		}
		a++;
	}
	for (i = a - b; i < a; i++)
	{
	c = c + ((s[i] - 48) * f);
	f /= 10;
	}
	return (d * c);
}
