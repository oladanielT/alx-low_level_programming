#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: the character
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}
