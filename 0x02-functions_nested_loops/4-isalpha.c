#include "main.h"
/**
 * _isalpha - Checking if it's an Alphabet
 * @c: character to be checked
 * Return: Always (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
