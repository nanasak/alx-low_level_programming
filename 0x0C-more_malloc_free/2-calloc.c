#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size of memory
 *
 * Return: Always 0 (successful)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(y);

	if (p == NULL)
		return (NULL);
	while (x < y)
	{
		p[x] = 0;
		x++;
	}

	return (p);
}
