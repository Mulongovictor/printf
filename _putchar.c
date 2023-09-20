#include "main.h"
/**
 * _putchar - this function wtites the the character c to stdout
 * @c: is the characher to print
 * Return: return when it is success 1
 */

_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}


