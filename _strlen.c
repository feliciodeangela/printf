#include "main.h"
/**
 * _strlen - Entry point
 * @s: value to count
 * Description: Length of a string
 * Return: String length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
