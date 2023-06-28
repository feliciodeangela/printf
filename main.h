#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *s);
void print_selector(const char *fmt, va_list args, int *newLen);

#endif
