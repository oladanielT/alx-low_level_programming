#include <stdio.h>
/**
 * main - my main function
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)", sizeof(a));
	printf("size of an int: %lu byte(s)", sizeof(b));
	printf("size of a long int: %lu byte(s)", sizeof(c));
	printf("size of a long long int: %lu byte(s)", sizeof(d));
	printf("size of a float: %lu byte(s)", sizeof(e));
	return (0);
}
