#include "function_pointers.h"

/**
  * print_name - prints out a name
  * @name: name to be printed
  * @f: pointer to the function print_name
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
