#include "main.h"
#include <stdarg>
#include <unstd.h>

/**
 *num_length - the number of digits in an integer
 *@num: the integer number
 *Return: it returns the number of digits
 */

int num_length(int num)
{
	int length = 0;


	if (num == 0)
	{
	return (1);
	}
	while (num != 0)
	{
		num = num / 10;
		length++;
	}

	return (length);
}
/**
*_printf - it is the function that formats and prints the
*data according to the a format
*@format: it is the format string
*Return: it returns the number of the characters printed
*/

int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	unsigned int index = 0, strng_count, count = 0;
	va_list args;

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
		_putchar(format[index]);
		count++;
		}
		else
		{
		index++;
		if (format[index] == 'c')

		{
		_putchar(va_arg(args, int));
		count++;
		}
		else if (format[index] == 's')
		{
		strng_count = puts(va_arg(args, char*));
		count += (strng_count - 1);


		}

		else if (format[index] == 'd' || format[index] == 'i')
		{
		int num = va_arg(args, int);

		_putchar("%d", num);
		count += num_length(num);

		}
		else if (format[index] == '%')

		{
		_putchar('%');
		count++;
		}

		}


	  index++;

	}
va_end(args);
return (count);

}
