#include "main.h"
/**
 * print_last_digit - function to print the last digit;
 * @n: integer to be checked
 * Return: ALways(0)
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * (-1);
	}
	_putchar('0' + m);
	return (m);
}
