#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: string parametr
 */
void puts2(char *str)
{
	int a, i;

	a = strlen(str);
	for (i = 0; i < a; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
