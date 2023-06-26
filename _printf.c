#include "main.h"
/**
 * _printf - Entry point.
 * Description: Prints a String to Standard output according to specifiers.
 * @format: String to look for specifiers and print.
 * Return: Numbers of printed characters.
 */
int _printf(const char *format, ...)
{
	int i = 0, finLen = 0;
	char *s, c;
	va_list vargs;

	va_start(vargs, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				finLen = finLen + _putchar(format[i]);
				i = i + 1;
			}
			else if (format[i + 1] == 'c')
			{
				c = va_arg(vargs, int);
				if (c)
					finLen = finLen + _print_c(c);
				i = i + 1;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(vargs, char *);
				if (s)
					finLen = finLen + _print_s(s);
				i = i + 1;
			}
			else if (format[i + 1] == '\0')
				return (finLen = -1);
			else
				finLen = finLen + _putchar(format[i]);
		}
		else if (format[i] != '\0')
			finLen = finLen + _putchar(format[i]);
		i++;
	}
	va_end(vargs);
	return (finLen);
}
