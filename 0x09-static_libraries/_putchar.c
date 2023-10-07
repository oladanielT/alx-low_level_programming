#include <unistd.h>
/**
 * _putchar - function to return a char
 * @c: character to return
 * Return: A character
 */

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
