#include "main.h"
/**
 * _print_c - Module that prints char.
 * @c: Character to print.
 * Return: 1 || 0.
 */
int _print_c(char c)
{
	if (c != '\0' && c)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
