#include <unistd.h>
/**
 * _putchar - function that prints a character
 * @c: character to print
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
