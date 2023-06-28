#include "main.h"
/**
 * print_selector - Entry point.
 * Description: Selects type of print based on format specifier.
 * @fmt: Format to print.
 * @args: Arguments to substitute.
 * @newLen: Total String length.
 */
void print_selector(const char *fmt, va_list args, int *newLen)
{
	int carg;

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
					*newLen = *newLen + print_s((char *)va_arg(args, char *));
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
			*newLen = *newLen + print_c(*fmt);
		fmt++;
	}
}
