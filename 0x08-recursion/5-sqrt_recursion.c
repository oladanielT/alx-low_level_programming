#include "main.h"

int main_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that prints the squareroot
 * @n: number to cal
 * Return: square root of the number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (main_sqrt_recursion(n, 0));
	}
}

/**
 * main_sqrt_recursion - function to get the square root
 * @n: value to check
 * @i: value to iterate
 * Return: the square root
 */

int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (main_sqrt_recursion(n, i + 1));
	}
}

