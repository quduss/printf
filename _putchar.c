#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - prints one byte of character to stdout
 * @S: Character to be printed
 *
 * Return: int | 1 if successful
 * and -1 if error is encountered
 */

int _putchar(char S)
{
	return (write(1, &S, 1));
}
