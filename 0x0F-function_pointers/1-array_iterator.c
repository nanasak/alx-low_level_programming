#include "function_pointers.h"

/**
  * array_iterator - executes a fuction given as a parameter
  * @array: the array to be used
  * @size: is the size of the array
  * @action: is a pointer to the function you need to use
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}

