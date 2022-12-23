#include "main.h"

/**
 * string_toupper - changes alpahabets case
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
