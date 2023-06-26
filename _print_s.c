#include "main.h"
/**
 * _print_s - Prints a String.
 * @s: set of characters to print.
 * Return: Printed string length.
 */
int _print_s(char *s)
{
	int count = 0;
		if (s != NULL)
		{
			while (*s != '\0')
			{
				_putchar(*s);
				s++;
				count++;
			}
		}
	return (count);
}
