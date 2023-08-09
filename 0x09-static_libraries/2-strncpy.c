#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: input value of string
 * @src: source of string
 * @n: desired size of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
