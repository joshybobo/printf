#include "main.h"

/**
 * printf_s - function that prints strings
 * @args: argument to be passed
 *
 * Return: 0
 */

int printf_s(va_list args)
{
	char *str = va_arg(args, char *);
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	return (write(1, str, str_len));
}
