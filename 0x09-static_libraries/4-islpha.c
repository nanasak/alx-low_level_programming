#include "main.h"

/**
 * _isalpha - checks for the alphabet characters
 * @c: character to check
 *
 * Return: 1 if c is a letter or return 0 if it is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
