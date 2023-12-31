#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - function to check for digit
 * @s: character to chek
 * Return: Always 0
 */

int _isdigit(char *s)
{
	unsigned int i;

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
	int i = 1;
	int sum = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (_isdigit(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
