#include "main.h"

/**
 * printf_c - function that prints a character
 * @args: argument to be passed
 *
 * Return: 0
 */

int printf_c(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
