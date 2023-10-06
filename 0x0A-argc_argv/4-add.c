#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _isdigit(char *s);

/**
 * isdigit - function to check for digit
 * @s: character to chek
 * Return: Always 0
 */

int _isdigit(char *s)
{
	unsigned int i;
	for (i = 0; i < strlen(s); i++)
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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (_isdigit(argv[i]))
		{
			int num = atoi(argv[i]);
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
