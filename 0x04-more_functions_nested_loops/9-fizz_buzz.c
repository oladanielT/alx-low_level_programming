#include <stdio.h>
/**
 * main - fizz-buzz function
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}

