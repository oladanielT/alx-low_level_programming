#include <stdio.h>
/**
 * main - Main function
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
	if (i != j)
	{
	putchar('0' + i);
	putchar('0' + j);
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
