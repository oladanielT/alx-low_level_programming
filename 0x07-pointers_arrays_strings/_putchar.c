#include <unistd.h>
/**
 * _putchar - function to print a single character
 * @c: character to print
 * Return: c
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
