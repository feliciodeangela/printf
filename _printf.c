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
int print_c(char c)
{
	return (write(1,&c,1));
}
int print_s(char *s)
{
	int count = 0;

	if (s)
	{
		while (*s != '\0')
		{
			count = count + print_c(*s);
			s++;
		}
	}
	else
	{
		count = count + print_s("(null)");
	}
	return (count);
}
int print_selector(const char *fmt, va_list args, int *newLen)
{
	int carg;
	char *sarg;
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			switch (*(fmt + 1))
			{
				case '%':
					*newLen = *newLen + print_c(*fmt);
					fmt++;
					break;
				case 'c':
					carg = (int)va_arg(args, int);
					if (carg)
						*newLen = *newLen + print_c(carg);
					fmt++;
					break;
				case 's':
					sarg = (char *)va_arg(args, char *);
					if (sarg)
						*newLen = *newLen + print_s(sarg);
					fmt++;
					break;
				case '\0':
					*newLen = -1;
					break;
				default:
					*newLen = *newLen + print_c(*fmt);
					break;
			}
		}
		else
		{
			*newLen = *newLen + print_c(*fmt);
		}
		fmt++;
	}
}
