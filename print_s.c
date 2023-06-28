#include "main.h"
/**
 * print_s - Prints a String.
 * @s: set of characters to print.
 * Return: Printed string length.
 */
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
