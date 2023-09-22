#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;

	i = 0;

	srand(time(NULL));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);
	return (0);
}
