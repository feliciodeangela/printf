#include "main.h"
/**
 * print_c - Entry point.
 * Description: Module that prints char.
 * @c: Character to print.
 * Return: 1 || 0.
 */
int print_c(char c)
{
	return (write(1, &c, 1));
}
