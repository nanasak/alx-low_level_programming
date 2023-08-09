#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: memory where value has to be stored
 * @src: memory to be copied
 * @n: number of bytes
 *
 * Retrun: the copied memroy with the changed n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
