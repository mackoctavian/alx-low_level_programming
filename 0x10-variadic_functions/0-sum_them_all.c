#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the total of all its parameters.
 * @n: The total number of parameters passed to sum_them_all function.
 * @...: Variable number of paramters to in the function.
 *
 * Return: the total of all parameters.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, total = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		total += va_arg(numbers, int);

	va_end(numbers);

	return (total);
}
