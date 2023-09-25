#include "main.h"
/**
 * string_toupper - function to change all to lowercase
 * @n: pointer
 * Return:n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\n')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
			i++;
		}
	}
	return (n);
}
