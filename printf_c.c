#include "main.h"
#include <unistd.h>

/**
 * printf_chars - function that prints characters
 * @args: argument to be passed
 *
 * Return: return
 */

int printf_chars(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

