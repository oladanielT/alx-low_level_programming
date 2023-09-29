#include "main.h"
int check_p(char *s, int i, int l);
int strl_recur(char *s);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it exist and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_p(s, 0, strl_recur(s)));
	}
}

/**
 * strl_recur - return length of the string
 * @s: the String tocheck
 * Return: length
 */

int strl_recur(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strl_recur(s + 1));
	}
}

/**
 * check_p - function to chech th characters
 * @s: string to check
 * @i: iterator
 * @l: string length
 * Return: if palidrome 1, if not 0
 */

int check_p(char *s, int i, int l)
{
	if (*(s + 1) != *(s + l - 1))
	{
		return (0);
	}
	else if (i >= l)
	{
		return (1);
	}
	else
	{
		return (check_p(s, i + 1, l - 1));
	}
}
