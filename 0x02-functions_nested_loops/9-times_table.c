#include "main.h"
/**
 * times_table - function to print times table
 * Return: Always 0
 */
void times_table(void)
{
	char a, b, c, d, e;

	for (a = 0; a <= 2; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	c = a * b;
	d = c / 10;
	e = c % 10;
	if (b == 0)
	{
		_putchar('0');
	}
	else if (c < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + e);
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar('0' + d);
	_putchar('0' + e);
	}
	}
	_putchar('\n');
	}
}
