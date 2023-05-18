#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the difference between two strings
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * _strlen - returns the length of a string
 * @s: paramenter to be determined
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
/**
 * _strncpy - copies one string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
