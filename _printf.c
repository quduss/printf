#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - prints a string to stdout handling c, s, %
 * @format: string input to print
 * @...: variable arguments to be passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;
	int c;
	int len = 0;
	int len2 = 0;
	va_list ap;
	char *s;

	if (format != NULL)
	{
		va_start(ap, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					_putchar(va_arg(ap, int));
					i++;
					len++;
				}
				else if (format[i + 1] == 's')
				{
					s = va_arg(ap, char *);
					len2 += print_string(s);
					i++;
				}
				else if (format[i + 1] == '%')
				{
					_putchar(format[i]);
					i++;
					len++;
				}
				else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				{
					c = va_arg(ap, int);
					if (c < 0)
						len++;
					print_integer(c);
					len2 += count_int(c);
					i++;
				}
				else
				{
					_putchar(format[i]);
					len++;
				}
			}
			else
			{
				_putchar(format[i]);
				len++;
			}
		}
		va_end(ap);
	}
	return (len + len2);
}
