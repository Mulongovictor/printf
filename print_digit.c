#include "main.h"
/**
 * print_digit - it prints the number of the digits in an integer
 * @num: this is the number of the digits
 * @count: it counts the number of the digits
 * Return: it returns number of the digits
 */

int print_digit(long num, int count)
{

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}
	if (num / 10)
	{
		count = print_digit(num / 10, count);
	}
	_putchar(num % 10 + '0');
	return (count + 1);
}
