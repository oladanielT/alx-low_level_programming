#include <stdio.h>
/**
 * main - main function
 * Return: Always (0)
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, sum;
	unsigned long h_1, h_2;
	unsigned long a_h_1, a_h_2, b_h_1, b_h_2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}
	a_h_1 = a / 10000000000;
	a_h_2 = a % 10000000000;
	b_h_1 = b / 10000000000;
	b_h_2 = b % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h_1 = a_h_1 + b_h_1;
		h_2 = a_h_2 + b_h_2;
		if (a_h_2 + b_h_2 > 9999999999)
		{
			h_1 += 1;
			h_2 %= 10000000000;
		}
		printf("%lu%lu ", h_1, h_2);
		if (count != 98)
		{
			printf(",");
		}
			a_h_1 = b_h_1;
			a_h_2 = b_h_2;
			b_h_1 = h_1;
			b_h_2 = h_2;
	}
		printf("\n");
		return (0);
}
