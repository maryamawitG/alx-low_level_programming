#include "main.h"
/**
 * print_last_digit - prints the last digit
 * of a number
 *
 * @n: input
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
		if (i < 0)
		{
			_putchar(i * -1);
			return (i * -1);
		}
		else
		{
			_putchar(i + 48);
			return (i);
		}
}