#include <unistd.h>
/**
 * _putchar - write to std out
 * @c: the character
 * Return: 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}