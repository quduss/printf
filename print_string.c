#include "main.h"

/**
 * print_string - prints string to stdout
 * @s: string input
 * Return: int | number of characters printed
 */

int print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
