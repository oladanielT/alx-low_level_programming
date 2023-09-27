#include "main.h"
#include <stdio.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: Array
 * @size: size of an array
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int ps = 0;
	int ss = 0;

	for (x = 0; x < size; s++)
	{
		ps += a[x * size + x];

		ss += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d\n", ps, ss);
}
