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
	int *a, i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		a[i] = j++;
	}
	return (a);
}
