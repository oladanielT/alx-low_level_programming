#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string
 * @s: The pointer to the string
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
