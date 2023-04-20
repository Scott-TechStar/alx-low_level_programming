#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdlib.h>


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void _char(va_list arg);
void _int(va_list arg);
void _float(va_list arg);
void _string(va_list arg);



#endif
