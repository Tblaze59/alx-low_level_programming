#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: arrays
 * @n: no of elements of array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[1] = a[n];
		a[n] = j;
	}
}
