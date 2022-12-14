#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int be = 1;
	unsigned long int af = 2;
	unsigned long int b = 1000000000;
	unsigned long int be1;
	unsigned long int be2;
	unsigned long int af1;
	unsigned long int af2;

	printf("%lu", be);
	for (a = 1; a < 91; a++)
	{
		printf(", %lu", af);
		af += be;
		be = af - be;
	}
	be1 = (be / 1);
	be2 = (be % 1);
	af1 = (af / 1);
	af2 = (af % 1);
	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", af1 + (af2 / 1));
		printf("%lu", af2 % 1);
		af1 = af1 + be1;
		be1 = af1 - be1;
		af2 = af2 + be2;
		be2 = af2 - be2;
	}
	printf("\n");
}
