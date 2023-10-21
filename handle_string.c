#include "main.h"
/**
 * string_print - string print
 * @str: pointer string
 * Return string len
 */
int string_print(char *str)
{
	int lenght = 0;
	int g;
	char *ptr;


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
}
