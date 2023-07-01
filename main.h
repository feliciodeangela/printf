#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *s);
int print_id(long int id);
int intochar(long int ia, char *s);
void print_selector(const char *fmt, va_list args, int *newLen);

#endif
