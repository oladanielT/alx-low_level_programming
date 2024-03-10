#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: pointer to the strings
 * Return 0
 */

void _print_rev_recursion(char *s)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i + 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

	return (0);
}
