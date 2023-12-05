#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: the charater string. the format string is composed of zero
 * 	    or more directive. you need to handle the following coversion
 * Returns: the numver of character printed(excluding the null byte used
 * 	    to end the output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	func[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_parcentage},
	}
}
