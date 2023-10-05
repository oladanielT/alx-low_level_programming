#include <stdio.h>
/**
 * main - function to print the program name.
 * @argc: arguement of the command line
 * @argv: arguement vector that holds the argc
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
