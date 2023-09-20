#include <stdio.h>
/**
 * main - function to print the highest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int i;

	long int n = 612852475143;
	
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld \n", i);
				break;
			}
			n = n / i;
		}
	}
	return (0);
}


