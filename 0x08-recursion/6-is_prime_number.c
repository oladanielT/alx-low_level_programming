#include "main.h"

int main_prime(int n, int i);

/**
 * is_prime_number - function to check prime number
 * @n: integer to print
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (main_prime(n, n - 1));
	}
}

/**
 * main_prime - main function to print the prime
 * @n: number to print it's prime
 * @i: iterator to check for the prime number
 * Return: 1 if prime and 0 if not
 */

int main_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (main_prime(n, i - 1));
	}
}
