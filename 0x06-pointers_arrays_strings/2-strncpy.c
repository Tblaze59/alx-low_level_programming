#include "main.h"

/**
 * _strncpy - cp a string with n
 * @dest: cp input
 * @src: cp output
 * @n: n char to b cp
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] =  src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
