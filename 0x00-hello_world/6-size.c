#include <stdio.h>
/**
 * main - main functions for size of various type on the computer
 * Return: Always returning 0;
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", sizeof(a));
	printf("size of an int: %lu byte(s)\n", sizeof(b));
	printf("size of a long int: %lu byte(s)\n", sizeof(c));
	printf("size of a long lont int: %lu byte(s)\n", sizeof(d));
	printf("size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
