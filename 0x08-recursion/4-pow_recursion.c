#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the th power of y
 * @x: value of raise to the power
 * @y: power
 * Return: result of the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
