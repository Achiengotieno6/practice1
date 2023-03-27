#include "main.h"

/**
 * _write_char - writes character c to stdout
 * @c: the character to print
 * Return: return 1 on success
 */
int _write_char(char c)
{
		return (write(1, &c, 1));
}
