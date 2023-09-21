#include <stdio.h>
/**
 * print_array - function that prints n elements of
 * an array of integers, followed by a new line.
 * @a: pointer to the array
 * @n: number of element in the array
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != i - 1)
		{
			printf(", ");
		}
	}
}
