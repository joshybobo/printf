#include "main.h"

/**
 * _printf - function that prints
 * @format: format to be printed
 * Return: void
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
			write(1, format, 1);
				print_allchars++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				print_allchars++;
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
		}
		format++;
	}

	va_end(list_of_allargs);

	return (0);

}
