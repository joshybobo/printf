#include "main.h"

/**
 * printf_d - function that prints integer
 * @args: argument passed
 *
 * Return: )
 */

int printf_d(va_list args)
{
	int num = va_arg(args, int);
	char num_str[12];

	int num_len = snprintf(num_str, sizeof(num_str), "%d", num);

	return (write(1, num_str, num_len));
}
