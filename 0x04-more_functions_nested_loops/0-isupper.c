#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - function to check for uppercase
 * @c: arguement to check
 * Return: Always 0;
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
