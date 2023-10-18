#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printf_chars(va_list args);
int printf_percent(void);
int printf_strs(va_list args);

#endif
