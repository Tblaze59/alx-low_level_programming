#include "main.h"

/**
 * helperfunction - checks for sqrt of num
 * @num: value
 * @psqrt: possiblesqrt
 * Return: sqrt of number
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the sqrt
 * @n: sqrt of
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}


