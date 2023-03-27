#include "main.h"
**
 * _printf - Receives the main string and all the necessary parameters to
 *  * print a formated string
 *   * @format: A string containing all the desired characters
 *    * Return: A total count of the characters printed
 *     */
 int _printf(const char *format, ...)
{
	int printed;
	convert_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex},
		{NULL, NULL}
	};
	va_list args;
	if(format == NULL)
		return (-1);

	va_start(args, format);
	printed = parser(format, f_list, args);
	va_end(args);
	return (printed);
}


