#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
/**
 * print_char - prints a char
 * @arg: a list of argument pointing to the character to be printed
 */
void print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an integer
 * @arg: a list arguments pointing to the integers to be printed
 */
void print_int(va_list arg)
{
	int x;
	x = va_arg(arg, int);
	printf("%d", x);
}
/**
 * print_float - prints a float
 * @arg: a list of arguments pointing to the float to be printed
 */
void print_float(va_list arg)
{
	float x;
	x = va_arg(arg, double);
	printf("%f", x);
}
/**
 * print_string - print a string
 * @arg: a list of argument pointing to the string to be printed
 */
void print_string(va_list arg)
{
	char *str;
	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * @...: a variable number of arguments to be printed
 *
 * Description: Any argument not of type char, int, float or char * is ignored
 * if a string is NULL (nil) is prined instead
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c",print_char},
		{"i",print_int},
		{"f",print_float},
		{"s",print_string}
	};
	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (J < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ",";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
