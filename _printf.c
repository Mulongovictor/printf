#include "main.h"

/**
 * _printf - is a function that behaves like a printf.
 * @format: argument of the function
 * Return: count
 */
int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	int i;
	int charcount = 0;
	va_list sentence;

	va_start(sentence, format);

	if (format == NULL)
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charcount++;
		}
		else if (format[i] == '%')
		{
			format++;
			if (format[i] == '\0')
			{
				break;
			}
			else if (format[i] == '%')
			{
				_putchar(format[i]);
				charcount++;
			}
			else if (format[i] == 'c')
			{
				charcount += select_input(format[i])(sentence);
			}
			else if (format[i] == 's')
			{
				charcount += select_input(format[i])(sentence);
			}
			else if (format[i] == 'd')
			{
				charcount += select_input(format[i])(sentence);
			}
			else if (format[i] == 'i')
			{
				charcount += select_input(format[i])(sentence);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				charcount += 2;
			}
		}
	}
	va_end(sentence);
	return (charcount);
}
