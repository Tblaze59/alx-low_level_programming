#include <unistd.h>  

/**
 * _putchar - c to stdout
 * @c: char
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
