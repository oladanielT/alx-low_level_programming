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
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (!num || num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
