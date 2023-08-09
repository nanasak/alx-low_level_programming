#include "main.h"

/**
 * _strstr - retruns pointer to the first occurance in a haystack
 * @haystack: the main pointer string to be searched
 * @needle: the pointer to the the haystack
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
