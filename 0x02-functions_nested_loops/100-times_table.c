#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function to print times table
 * @n: Integer to print
 * Return: Always (0)
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	c = a * b;
	if (b == n)
	{
		printf("%d", c);
	}
	else
	{
	printf("%d,   ", c);
	}
	}
	printf("\n");
	}
	}
}

