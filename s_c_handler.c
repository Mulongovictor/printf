#include "main.h"

/**
 * s_handler - s specifier
 * @sentence: argument
 * Return: count
 */

int s_handler(va_list sentence)
{
	int count = 0;
	int i;
	char *ch = va_arg(sentence, char*);

	if (ch == NULL)
	{
		ch = "(null)";
	}
	for (i = 0; ch[i] != '\0'; i++)
	{
		count += _putchar(ch[i]);
	}
	return (count);
}

/**
 * c_handler - c specifier
 * @sentence: argument
 * Return: count
 */

int c_handler(va_list sentence)
{
	int count = 0;
	char get_input = va_arg(sentence, int);

	count += _putchar(get_input);
	return (count);
}
