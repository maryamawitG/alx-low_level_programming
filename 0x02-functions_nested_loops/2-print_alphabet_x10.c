#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{

	char ch;
	int i = 0;

	while (i <= 26)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar('a');
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
