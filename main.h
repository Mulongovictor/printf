#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*select_input(char a))(va_list sentence);
int printf_replica(const char *format, ...);
int d_handler(va_list sentence);
int i_handler(va_list sentence);
int print_digit(long num, int count);
int _putchar(char c);


#endif
