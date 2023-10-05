#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: Arguement counter
 * @argv: Arguement vector
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
