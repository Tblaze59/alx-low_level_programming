#include "main.h"
/**
 * helperfunction - returns binary
 * @num: value
 * @i: possible factor
 * Return: 0 or 1
 */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
	{
		return (i);
	}
}

/**
 * is_prime_number - checks for prime
 * @n: value
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}



