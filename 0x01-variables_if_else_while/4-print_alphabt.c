#include <stdio.h>
/**
 * main - main function
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	if (i != 'q' && i != 'e')
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
