#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * No Return value
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
