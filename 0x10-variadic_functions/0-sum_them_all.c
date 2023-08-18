#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all variable paramters.
  * @n: The number of paramters to be summed.
  * @...: A variable number of paramters to calculate the sum of.
  *
  * Return: If n == 0 - 0, else sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
