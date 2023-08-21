#include "main.h"
/**
 * count_int - counts the number of digits
 * @a: integer input
 * Return: number of digits
 */

int count_int(int a)
{
	if (a < 0)
	{
		a = -a;
	}

	if ((a / 10) == 0)
		return (1);
	return (1 + count_int(a / 10));
}
