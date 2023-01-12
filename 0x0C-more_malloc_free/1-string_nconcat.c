#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: string
 *@s2: string
 *@n: index of string 2
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1 = 0, sz2 = 0, i;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[sz1] != '\0')
	{
		sz1++;
	}
	while (s2[sz2] != '\0')
	{
		sz2++;
	}
	if (n > sz2)
	{
		n = sz2;
	}

	a = malloc((sz1 + n + 1) * sizeof(char));
	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; i < sz1; i++)
	{
		a[i] = s1[i];
	}
	for (; i < (sz1 + n); i++)
	{
		a[i] = s2[i - sz1];
	}
	a[i] = '\0';
	return (a);
}

