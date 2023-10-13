#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function to check if digit
 * @s: Arguement to check
 * Return: Alway 0
 */

int _isdigit(char *s)
{
	while(*s)
	{
		if (*s > '0' || *s < '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * main - function to multiply two numbers
 * @argc: Arguement count
 * @argv: Arguement vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (_isdigit(argv[1]) || _isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
