#include "main.h"
/**
 * reverse_array - function to reverse
 * @a: input value
 * @n: number of elements
 * Return: reversed elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
