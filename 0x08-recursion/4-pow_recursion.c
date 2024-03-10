#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function to calculate power
 * @x: number
 * @y: power
 * Return: x to the power of y
 */


int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * power(y - 1));
}
