#include "shell.h"
/**
 * _strdup - duplicate a string
 * @str: the string to be duplicated
 * Return: the copy
 */
char *_strdup(char *str)
{
	char *copy;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = (char *)malloc((sizeof(char) * length) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[length] = '\0';

	return (copy);
}

/**
 * _strchr - this function is the same strchr function
 * @s: the input pointer
 * @c: the carachter that we are looking for
 * Return: itreturn NULL or the rest of the pointer s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

/**
 * _strspn - this function is the same of the function strsnp
 * @s: the original text
 * @accept: the text that we'll use for checking
 * Return: it return the new value of s
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

/**
 * _strstr - this function and the strstr function are the same
 * @haystack: the haystack
 * @needle: the needle
 * Return: it depands on the input
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			;
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

/**
 * printerro - prints the error same as sh
 * @name: name of the the shell
 * @cmd: string
 * @indx: index
 */
void printerro(char *name, char *cmd, int indx)
{
	char *index, msg[] = "not found\n";

	index = _itoa(indx);

	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, msg, _strlen(msg));
}
