#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void _char(va_list arg)
{
char ltr;
ltr = va_arg(arg, int);
printf("%c", ltr);
}
/**
 * _int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void _int(va_list arg)
{
int num;
num = va_arg(arg, int);
printf("%d", num);
}
/**
 * _float - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void _float(va_list arg)
{
float num;
num = va_arg(arg, double);
printf("%f", num);
}
/**
 * _string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void _string(va_list arg)
{
char *str;
str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *sprt = "";
printer_t funcs[] = {
{"c", _char},
{"i", _int},
{"f", _float},
{"s", _string}
};
va_start(args, format);
while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
{
j++;
}
if (j < 4)
{
printf("%s", sprt);
funcs[j].print(args);
sprt = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
