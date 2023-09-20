#include "main.h"

/**
 *d_handler - it is print variadic arguments
 *@sentence: it an argument of the va_arg
 *Return: it returns the count
 */

int print_digit(long num, int count);
int d_handler(va_list sentence)
{
	int count;
	int val = va_arg(sentence, int);

	count = print_digit(val, 0);
	return (count);
}
