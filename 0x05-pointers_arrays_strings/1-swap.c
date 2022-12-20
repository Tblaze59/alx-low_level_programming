#include" main.h"

/**
 * swap_int - swaps the value of two integers
 * @n: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
