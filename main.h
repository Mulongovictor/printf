#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int (*select_input(char a))(va_list sentence);
int _printf(const char *format, ...);
int d_handler(va_list sentence);
int i_handler(va_list sentence);
int print_digit(long num, int count);
int s_handler(va_list sentence);
int c_handler(va_list sentence);

#endif
