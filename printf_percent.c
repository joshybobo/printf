#include "main.h"
#include <unistd.h>

/**
 * printf_percent - function that prints percent
 *
 * Return: value
 */

int printf_percent(void)
{
	char percent = '%';

	return (write(1, &percent, 1));
}
