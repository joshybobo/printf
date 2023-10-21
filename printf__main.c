#include "main.h"
<<<<<<< HEAD

/**
=======
/**
<<<<<<<< HEAD:handle_string.c
 * string_print - string print
 * @str: pointer string
 * Return string len
========
>>>>>>> 44601f6b07e9aaf6babee2d7b8f83d260c4a0c66
 * _printf - function that prints
 * @format: format to be printed
 *
 * Return: 0
<<<<<<< HEAD
 */

int _printf(const char *format, ...)
{
	int print_allchars = 0;
	va_list list_of_allargs;

=======
>>>>>>>> 44601f6b07e9aaf6babee2d7b8f83d260c4a0c66:printf__main.c
 */
int string_print(char *str)
{
	int lenght = 0;
	int g;
	char *ptr;

<<<<<<<< HEAD:handle_string.c

	if (str == NULL)
	{
		ptr = ("(null))");
		for (g = 0; ptr[g] != '\0'; g++)
		{
			_putchar(ptr[g]);
		}
		return (6);

	}
	for (g = 0; ptr[g] != '\0'; g++)
	{
		_putchar(ptr[g]);
		lenght++;
	}
	return (lenght);
========
>>>>>>> 44601f6b07e9aaf6babee2d7b8f83d260c4a0c66
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
<<<<<<< HEAD
=======
>>>>>>>> 44601f6b07e9aaf6babee2d7b8f83d260c4a0c66:printf__main.c
>>>>>>> 44601f6b07e9aaf6babee2d7b8f83d260c4a0c66
}
