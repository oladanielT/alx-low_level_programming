#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: size
 * Return: concatenated result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	size_t len_s1 = sizeof(s1) / sizeof(s1[0]);
	size_t len_s2 = sizeof(s2) / sizeof(s2[0]);
	size_t  check_s2 = n >= len_s2 ? len_s2 : n;
	char *result = (char *) malloc(len_s1 + check_s2 + 1);
	
	if (result == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}
	while (i < check_s2)
	{
		*result = *s2;
		result++;
		s2++;
		check_s2--;
	}
	*result = '\0';
	return (result);
}
