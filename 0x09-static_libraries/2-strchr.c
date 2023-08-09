#include "main.h"

/**
 * _strchr - prints strings from character
 * @s: value of input
 * @c: value of char input
 *
 * Return: Always 0 (Success)
 */
char *_strchar(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
