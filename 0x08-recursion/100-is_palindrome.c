#include "main.h"
/**
 * _lenght - lenght of string
 * @s: the string
 * Return: the lenght
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 * checkp - check if it is palindrome
 * @i: index
 * @lg: lenght of string
 * @s: the string
 * Return: 1 or 0
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
