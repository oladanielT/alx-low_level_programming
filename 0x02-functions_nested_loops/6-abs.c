#include "main.h"
/**
 * _abs - Getting the absolute value of a number
 * @n: Integer to be checked
 * Return: Always (0)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else if (n > 0)
		return (n);
	return (0);
}
