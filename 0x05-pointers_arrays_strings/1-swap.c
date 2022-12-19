#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a:integer
 * @b:integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
