#include "main.h"
/**
 * main - A program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
