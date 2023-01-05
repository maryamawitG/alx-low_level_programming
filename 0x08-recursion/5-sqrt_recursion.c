#include "main.h"

/**
 * _sqrt - find the natural square root of a number
 * @x: root
 * @num: number to find the square root
 *
 *Return: if tne number has natural root - the square root.
 *	if the number does noot have a natural square root -1.
 */

int _sqrt(int num, int x)
{
	if (x * x == num)
		return (x);
	if (x == num / 2)
		return (-1);
	return (_sqrt(num, x + 1));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to return the square root
 * Return: if tne number has natural root - the square root.
 *	if the number does noot have a natural square root -1.
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, x));
}
