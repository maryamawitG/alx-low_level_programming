#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - array for prints a string
 *@b: number
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	 void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}

