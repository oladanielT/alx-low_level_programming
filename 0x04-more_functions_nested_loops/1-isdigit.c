#include <ctype.h>
/**
 * _isdigit - function to check if digit
 * @c: arguement to print
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
