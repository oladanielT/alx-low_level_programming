#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: string to print
 * Return: ALways 0
 */
void puts_half(char *str)
{
	int i, l;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	l = (j - 1) / 2;

	for (i = l + 1; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
