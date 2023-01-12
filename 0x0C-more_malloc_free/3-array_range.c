#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value
 * @max: maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *a, i = 0, b = min;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i <= max - min)
	{
		a[i++] = b++;
	}
	return (a);
}
