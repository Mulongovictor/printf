#include "main.h"

/**
 * i_handler - it handles the %i specifier.
 * @sentence: it is the parameter
 * Return: count
 */

int print_digit(long num, int count);
int i_handler(va_list sentence)
{
	int count;
	int val1 = va_arg(sentence, int);

	count = print_digit(val1, 0);
	return (count);
}
