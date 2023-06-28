#include "main.h"
/**
 * _printf - Entry point.
 * Description: Prints a String to Standard output according to specifiers.
 * @format: String to look for specifiers and print.
 * Return: Numbers of printed characters.
 */
#include "main.h"
int _printf(const char *format, ...)
{
	int finLen = 0;
	va_list vargs;

	va_start(vargs, format);
	print_selector(format, vargs, &finLen);
	va_end(vargs);
	return (finLen);
}
