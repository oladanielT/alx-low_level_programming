#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: arguement count
 * @argv: Arguement vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0 || (argv[i][0] != '0' && !num))
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
