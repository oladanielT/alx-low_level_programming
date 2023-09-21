#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: parameter
 * @b: second pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int empty;

	int *c = &empty;

	*c = *a;

	*a = *b;

	*b = *c;
}
