#include "main.h"
/**
 * _print_rev_recursion - function to print string in reverse
 * @s: string to print
 * Return: Always 0;
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + i);
		_putchar(*s);
	}
}
