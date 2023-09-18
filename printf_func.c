#include "main.h"

/**
 * _printf - is function that outputs on the std output
 * @format: is the string that is parsed to the function
 *
 * Return: 0 Always (SUCCESS)
 */
int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	int countchar = 0;
	va_list formatchar;

	if (format == NULL)
		return (-1);

	va_start(formatchar, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			countchar++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				countchar++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(formatchar, int);


				write(1, &c, 1);
				countchar++;
			}
			else if (*format == 's')
			{
				char  *strng = va_arg(formatchar, char*);
				int strglen = 0;
				int i;

				for (i = 0; strng[i] != '\0'; i++)
				{
					strglen++;
				}
				write(1, strng, strglen);
				countchar += strglen;
			}

		}
		format++;
	}
	va_end(formatchar);
	return (countchar);
}
