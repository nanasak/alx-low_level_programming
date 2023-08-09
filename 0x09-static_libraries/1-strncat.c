#include "main.h"

/**
 * _strncat - the function concatenate two strings
 * using n bytes from the src
 * @dest: the  value of the string as entered
 * @src: entered value of the string
 * @n: the  size of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[n] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
