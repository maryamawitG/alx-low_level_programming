#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char n;
	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
