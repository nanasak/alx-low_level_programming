#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition operators
  * @a: a parameter to be operated
  * @b: a parameter to be operated
  *
  * Return: the results of the operation
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub: subtraction operations
  * @a: a parameter to be operated
  * @b: a parameter to be operated
  *
  * Return: results of the operation
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul: multiplication operations
  * @a: a parameter to be operated
  * @b: a parameter to be operated
  *
  * Return: results of the operation
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div: division  operations
  * @a: a parameter to be operated
  * @b: a parameter to be operated
  *
  * Return: results of the operation
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod: modular of operations
  * @a: a parameter to be operated
  * @b: a parameter to be operated
  *
  * Return: results of the operation
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
