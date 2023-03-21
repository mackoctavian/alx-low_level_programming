#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 *No Return value
 */

void print_alphabet_x10(void)
{
	int a, i;

	i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar('\n');
	}
}
