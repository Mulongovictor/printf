#include "main.h"

/**
 * select_input - function that points to other function
 * depending on the argument char a.
 * @a: is the parameter.
 * Return: 0 Always (SUCCESS)
 */

int (*select_input(char a))(va_list sentence)
{
	if (a == 's')
	{
		return (&s_handler);
	}
	else if (a == 'c')
	{
		return (&c_handler);
	}
	if (a == 'd')
	{
		return (&d_handler);
	}
	else if (a == 'i')
	{
		return (&i_handler);
	}
	return (0);
}
