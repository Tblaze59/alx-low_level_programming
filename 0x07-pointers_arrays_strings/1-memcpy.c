#include "main.h"
/**
 * _memcpy - cp memory area
 * @dest: destination
 * @src: source
 * @n: bytesfilled
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
