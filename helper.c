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
 * Return: destination string
 */
char *_strncpy(char *dest, char *src)
{
	int i = 0, src_len = 0;

	for (src_len = 0; src[src_len] != src_len++)
		;
	for (i = 0; i <= src_len; i++)
		dest[i] = src[i];
	return (dest);
}
