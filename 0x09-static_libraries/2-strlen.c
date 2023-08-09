#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 *
 * Return: length
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
