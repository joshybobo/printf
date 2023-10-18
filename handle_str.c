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
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				write(1, "%", 1);
				print_allchars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_allargs, char *);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				print_allchars++;
			}
		}
		else
		{
			write(1, format, 1);
			print_allchars++
		}
		format++;
		va_end(list_of_allargs);
		return (list_of_allargs);

}
