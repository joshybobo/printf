#include "main.h"

/**
 * printf_percent - function that prints the format specifier
 *
 * Return: 0
 */

int printf_percent(void)
{
	char percent = '%';

	return (write(1, &percent, 1));
}
