#include "main.h"

/**
 * _printf - A custom printf funtion.
 * @format: the string argument
 *
 * Return: the total number of characters
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

/**
 * print_format - implement the logic to handel diffrent format specifier.
 * @format: possible format specifier
 * @ap: argument pointer
 *
 * Return: 0 or count
*/
int print_format(char format, va_list ap)
{
	int count;

	count = _printf("%s\n");
	_printf("%d\n", count);

	return (0);
