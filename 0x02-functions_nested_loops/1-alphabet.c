#include "main.h"

/**
 * prints_alphabet - print the alphabets in lowercase
 * Describes how this work
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
