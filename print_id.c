#include "main.h"
/**
 * print_id - Entry point.
 * Description: Print an integer.
 * @id: int to print.
 * Return: Numbers of printed characters.
 */
int print_id(long int id)
{
	char *s;
	long int i = 0, d = id;

	if (!id)
	{
		return (print_c('0'));
	}
	while (d != 0)
	{
		d = d / 10;
		i++;
	}
	if (id < 0)
	{
		i++;
	}
	s = malloc(i);
	d = intochar(id, s);
	free(s);
	return (d);
}
