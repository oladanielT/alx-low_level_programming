#include <stdio.h>
#include "main.h"


/**
 * factorial - function to calculate a factorial of a number
 * @n: number to cal
 * Return: 0 for success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
