#include "main.h"

/**
 * _printf - function that prints
 * @format: format to be printed
 *
 * Return: 0
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
				print_allchars += printf_c(list_of_allargs);
			}
			else if (*format == 's')
			{
				print_allchars += printf_s(list_of_allargs);
			}
			else if (*format == 'd' || *format == 'i')
			{
				print_allchars += printf_d(list_of_allargs);
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
