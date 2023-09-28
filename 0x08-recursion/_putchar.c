#include <unistd.h>
/**
 * _putchar - function to print one character
 * @c: character to print
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
