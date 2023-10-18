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
			else if (*format == 's')
			{
				char *str = va_arg(list_of_allargs, char *);
				int str_len = 0;

				while (str[str_len] != '\0')
				{
					str_len++;
				}
				write(1, str, str_len);
				print_allchars += str_len;
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
