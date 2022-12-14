#include "main.h"
/**
 * print_to_98 -  print n to 98
 *@n: number printed
 *Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%a, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%a, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
