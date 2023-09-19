#include "main.h"

/**
 * print_diagonal - function to print diagonal
 * @n: the number of times the character \ should be printed
 * Return: Always (0);
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
	_putchar('\n');
}
