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
	_putchar(i + 48);
	return (i);
}
