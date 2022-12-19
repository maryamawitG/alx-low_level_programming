#include "main.h"
/**
 * rev_string -  function that reverses a string
 * @s: string s
 * Return: reverse of string
 */
void rev_string(char *s)
{
	char ch;
	int a, l1, l2;

	l1 = 0;
	l2 = 0;

	while (s[l1] != '\0')
		l1++;
	l2 = l1 - 1;
	for (a = 0; a < l1; a++)
	{
		ch = s[a];
		s[a] = s[l2];
		s[l2] = ch;
		l2 -= 1;
	}
}
