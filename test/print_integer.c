#include "main.h"
/**
 * print_integer - prints integer to stdout
 * @a: integer input
 */

void print_integer(int a)
{
	if (a / 10)
		print_integer(a / 10);
	_putchar('0' + (a % 10));
}
