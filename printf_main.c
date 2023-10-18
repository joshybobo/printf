#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that prints to stdout
 * @format: format to be printed
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int print_allchars = 0;
	va_list list_of_allargs;

	if (format == NULL)
		return (-1);

	va_start(list_of_allargs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				print_allchars += printf_chars(list_of_allargs);
			}
			else if (*format == 's')
			{
				print_allchars += printf_strs(list_of_allargs);
			}
			else if (*format == '%')
			{
				print_allchars += printf_percent();
			}
		}
		else
		{
			write(1, format, 1);
			print_allchars++;
		}
		format++;
	}

	va_end(list_of_allargs);
	return (print_allchars);
}
