#include "main.h"

/**
 * printf_replica - is a function that behaves like a printf.
 * @format: argument of the function
 * Return: count
 */

int printf_replica(const char *format, ...)
{
	va_list sentence;

	va_start(sentence, format);

	int i;
	int ncount = 0;

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				ncount += select_input(format[i])(sentence);
			}
			else
			{
				ncount += _putchar(format[i]);
			}
		}
	}
	va_end(sentence);
	return (ncount);
}
