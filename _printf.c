#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: character string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, foramt, 1);
		}
		format++;
	}
	return (c);
}
