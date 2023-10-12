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
	size_t i = 0;
	size_t len_s1 = 0;
	size_t len_s2 = 0;
	size_t concat_l2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	concat_l2 = n >= len_s2 ? len_s2 : n;
	result = (char *)malloc(len_s1 + concat_l2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < concat_l2; i++)
	{
		result[len_s1 + i] = s2[i];
	}
	result[len_s1 + concat_l2] = '\0';
	return (result);
}
