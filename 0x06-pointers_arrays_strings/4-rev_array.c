#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @n: numbers
 * return: void
 * @a: array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

		for (i = n - 1; i >= 0; i--)
		{
			a[j] = a[i];
			j++;
		}
}

