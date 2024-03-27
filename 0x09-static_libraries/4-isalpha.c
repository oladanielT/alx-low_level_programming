#include "main.h"
/**
 * _isalpha - function to return an alphabeth
 * @c: character to check
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
}
