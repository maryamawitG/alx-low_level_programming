#include "main.h"

int _divisible(int num, int div);
/**
 * _divisible - check if a number is divisible
 * @num: number
 * @div: divisor
 *
 * Return: if the number is divisible - 0.
 *	if the number is not divisible - 1.
 */

int _divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (_divisible(num, div + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwis
 *		return 0
 * @n: number
 * Return: if the number is divisible - 0.
 *	if the number is not divisible - 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_divisible(n, 2));
}

