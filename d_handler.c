#include "main.h"

/**
 *d_handler - it is print variadic arguments 
 *@count: counts the digits in the va_list
 *Return: it returns the count 
 */

int d_handler(va_list sentence)
{
	int count;
	int val = va_arg(sentance, int);

	count = print_digit(val, 0);
	return (count);
}
