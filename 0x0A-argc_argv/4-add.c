#include <stdio.h>
#include <stdlib.h>
int _isdigit(char *s);

/**
 * isdigit - function to check for digit
 * @s: character to chek
 * Return: Always 0
 */

int _isdigit(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
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
	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);
		if (!_isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (num <= 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
