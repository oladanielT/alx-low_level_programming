#include <stdio.h>
/**
 * main - main function
 * Return: Always (0)
 */
int main(void)
{
	unsigned long count;
	unsigned long a, b, a1, a2, b1, b2;

	a = 1;
	b = 2;

	printf("%lu", a);
	for (count = 1; count < 91; count++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}
	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (count = 92; count < 99; count++)
	{
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
