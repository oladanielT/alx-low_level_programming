#include <stdio.h>
/**
 * main - main function
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
	if (i != 8 || i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
