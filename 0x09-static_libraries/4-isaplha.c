#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to check
 *
 * Return: 1 if c is an alphabet and 0 if it is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
