#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _strlen(const char *s);
int _putchar(char c);

int main(void)
{
	_printf("char: %c\nString: %s\nint: %i\nfloat: %d\nchar again: %c", 'C', "String", 6, 9, 'R');
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
}
int _printf(const char *format, ...)
{
	char *s;
	int len = _strlen(format), j = 0, i = 0, d, auxd, sumint = 0;
	char *intochar;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i = i + 2;
			}
			else if (format[i + 1] == 's')
			{
				s = va_arg(args, char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
				}
				i = i + 2;
			}
			/*if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				d = va_arg(args, int);
				auxd = d;
				while (auxd != 0)
				{
					auxd = auxd / 10;
					sumint++;
				}
				intochar = malloc(sumint);
				j = sumint - 1;
				while (j >= 0)
				{
					intochar[j] =  '0' + (d % 10);
					d = d / 10;
					j--;
				}
				j = 0;
				while (j < sumint)
				{
					_putchar(intochar[j]);
					j++;
				}
				free(intochar);
				i = i + 2;
			}*/
		}
		if (format[i] != '\0')
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
int _strlen(const char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return(c);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
