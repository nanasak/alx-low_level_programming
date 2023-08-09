#include "main.h"

/**
 * _memset - fills a a memory with a defined value
 * @s: location address of memory to be filled
 * @b: the value
 * @n: amount of bytes to be changed
 *
 * Return: change the arays with value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
