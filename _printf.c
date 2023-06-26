#include "main.h"
/**
 * _printf - Entry point.
 * Description: Prints a String to Standard output according to specifiers.
 * @format: String to look for specifiers and print.
 * Return: Numbers of printed characters.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char *s;
	va_list vargs;

	va_start(vargs, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(vargs, int));
				i = i + 1;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(vargs, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
				}
				i = i + 1;
			}
		}
		else if (format[i] != '\0')
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(vargs);
	return (_strlen(format));
}
	/*
	_printf("char: %c\nString: %s\nint: %i\nfloat: %d\nchar again: %c", 'C', "String", 6, 9, 'R');
        _printf("Let's try to printf a simple sentence.\n");
        _printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
	*/
