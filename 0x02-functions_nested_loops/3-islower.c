#include "main.h"
/**
 * _islower - function to check if lowercase
 * @c: The character to be checked
 * Return: Always (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
