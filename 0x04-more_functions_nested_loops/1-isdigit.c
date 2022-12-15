#include "main.h"
/**
 * _isdigit - checks for a difit
 * @c: the digit
 * Return: 1 if the number is digit , 0 if otherwise
 */

#include "main.h"

int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
