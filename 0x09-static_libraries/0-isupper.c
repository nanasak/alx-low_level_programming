#include "main.h"

/**
 * _isupper - inspects uppercase characters
 * @x: character to inspect
 *
 * Return: return 1, if uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return(1);

	return (0);
}
