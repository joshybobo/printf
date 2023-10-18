#include "main.h"

/**
 * _printf - function to print
 * @format: format to print
 * Return:  the number of characters printed
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
		if (*format != '%')
		{
			print_allchars += putchar(*format);
			format++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				print_allchars += putchar('%');
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_of_allargs, int);

				write(1, &c, 1);
				print_allchars++;
			}
			else
			{
				print_allchars += putchar(*format);
			}
			format++;
		}
	}
	va_end(list_of_allargs);
	return (0);
}
