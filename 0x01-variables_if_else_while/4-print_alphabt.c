#include <stdio.h>
/**
 * main -  Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	ch = 'a';
	while
		(ch <= 'z')
		{
			if ((ch != 'q' && ch != 'e') && ch <= 'z')
				putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}
