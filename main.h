#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int printf_c(va_list args);
int printf_percent(void);
int printf_s(va_list args);
int printf_d(va_list args);

#endif
