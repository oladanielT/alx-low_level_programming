#include <stdio.h>
#include <stdlib.h>


/**
 * main - A program that prints the minimum number of
 * coins to make change for an amount of mone
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num = atoi(argv[1]);

		if (num < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			int len = sizeof(coins) / sizeof(coins[0]);

			for (i = 0; i < len; i++)
			{
			while (num >= coins[i])
			{
				num -= coins[i];
				result++;
			}
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
