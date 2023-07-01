#include "main.h"
/**
 * intochar - Converts a number to an array of characters.
 * @num: Number to convert.
 * @str: Allocated string.
 * Return: Size of array that represents the number.
 */
int intochar(long int num, char *str)
{
	long int i = 0, isNegative = 0, start, end, digit;
	char temp;

	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	while (num != 0)
	{
		digit = num % 10;
		str[i++] = '0' + digit;
		num = num / 10;
	}
	if (isNegative)
	{
		str[i++] = '-';
	}
	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	str[i] = '\0';
	return (print_s(str));
}
