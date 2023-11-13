#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - a function that produces output according to a format
* Return: int
* @format: the format that we are going to output
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				count += printf("%c", va_arg(args, int));
				break;

				case 's':
				count += printf("%s", va_arg(args, char*));
				break;

				case '%':
				count += printf("%%");
				break;
			}
		}
		else
		{
			count += printf("%c", *format);
		}
		format++;
	}
	va_end(args);
	return (count);

}
