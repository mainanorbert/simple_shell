#include "main.h"

/**
 * _strcat - function to concatenate 2 strings
 *
 * @dest: string/destination pointer;
 * @src: pointer to string
 * Return: returns a concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncpy - function that copies a string up to n bytes
 * @dest: variable holding destination string
 * @src: variable holding source string
 * @n: maximum number of chars to be copied
 *
 * Return: returns a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/**
 * _strdup - a function that duplicates string
 * @str: string to be duplicated
 * Return: returns duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	size_t length;

	if (str != NULL)
	{
		length = _strlen(str);
		duplicate = malloc((length + 1) * sizeof(char));
		if (duplicate == NULL)
			return (NULL);
		_strcpy(duplicate, str);
	}
	return (duplicate);
}
/**
 * _strcpy - a function that copies a string
 * @dest: variable for destination string
 * @src: source string
 * Return: pointer to string copied
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - function that compares two strings
 *
 * @s1: first pointer to a string compared
 * @s2: second pointer to a string compared
 *
 * Return: returns 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
