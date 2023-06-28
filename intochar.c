#include "main.h"
/**
 * intochar - Entry point.
 * Description: Converts a number to an array of characters.
 * @ia: Number to convert.
 * Return: Size of array that represents the number.
 */
int intochar(int ia)
{
	int size = 0, i = 0, num = ia, newia, neg = 0;
	char *restr;

	if (ia == 0)
	{
		print_c('0');
		return (1);
	}
	while (num != 0)
	{
		num = num / 10;
		size++;
	}
	if (ia < 0)
	{
		size++;
	}
	restr = malloc(size + 1);
	if (ia < 0)
	{
		restr[0] = '-';
		i++;
	}
	num = ia;
	while (i < size)
	{
		newia = num % 10;
		num = num / 10;
		restr[size - (i + 1)] = '0' + newia;
		i++;
	}
	restr[i] = '\0';
	print_s(restr);
	free(restr);
	return (size);
}
