#include "main.h"
/**
 * _strlen - functions that returns len of string
 * @str: The string to check the length
 * Return: returns length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * _strncmp - compares n bytes of a string
 * @str1: first string to compare
 * @str2: the second string to compare
 * @n: number of bytes to compare
 * Return: returns 0 if equal
 */

int _strncmp(char *str1, char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else if (str1[i] == '\0')
			return (0);
	}
	return (0);
}
