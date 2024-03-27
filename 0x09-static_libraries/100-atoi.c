#include "main.h"
/**
 * _atoi - function to conver a string to a corresponding integer
 * @s: string input
 * Return: return an integer number
 */

int _atoi(char *s)
{
	int sn = 1, a = 0;
	unsigned int cov = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
		{
			sn *= -1;
		}
		a++;
	}

	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		cov = (cov * 10) + (s[a] - '0');
		a++;
	}
	cov *= sn;
	return (cov);
}
