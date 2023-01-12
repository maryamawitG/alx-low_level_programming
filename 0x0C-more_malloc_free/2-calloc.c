#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: number of element in the array
 * @size: bytes for each element in array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
}
