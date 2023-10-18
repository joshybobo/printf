#include "main.h"

/**
 * printf_strs - functions that prints strings
 * @args: argument to be passed
 *
 * Return: write(1, str, str_len);
 */

int printf_strs(va_list args)
{
	char *str = va_arg(args, char *);
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	return (write(1, str, str_len));
}

