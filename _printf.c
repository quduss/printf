#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - prints a string to stdout handling c, s, %
 * @format: string input to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, c, len = 0, len2 = 0;
	char *s;
	va_list ap;

	if ((format == NULL) || (format[0] == '%' && format[1] == ' ' &&
	format[2] == '\0') || (format[0] == '%' && format[1] == '\0'))
		return (-1);
		va_start(ap, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					_putchar(va_arg(ap, int)), i++, len++;
				}
				else if (format[i + 1] == 's')
				{
					s = va_arg(ap, char *);
					if (s == NULL)
						len2 += print_string("(null)");
					else
						len2 += print_string(s), i++;
				}
				else if (format[i + 1] == '%')
					_putchar(format[i]), i++, len++;
				else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				{
					c = va_arg(ap, int);
					if (c < 0)
						len++;
					print_integer(c), len2 += count_int(c), i++;
				}
				else
					_putchar(format[i]), len++;
			}
			else
				_putchar(format[i]), len++;
		} va_end(ap);
		return (len + len2);
}
