#include "shell.h"

/**
 * _strcpy - this function copy the text from the first array to another
 * @src: the text that we want to copy
 * @dest: the array that we want to copy into it
 * Return: it return the text that we just copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - this function are just like the function strcat
 * @dest: the detniation to put the sorce file
 * @src: the sorce text
 * Return: it return the new value of destination array
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

/**
 * _strncpy - this function and the function strncpy are the same
 * @dest: the destination array
 * @src: the sorce array
 * @n: the number of biyts that we want to copy
 * Return: it retun the new dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * _strncat - this function and the function strncat are the same
 * @dest: the destination array
 * @src: the sorce array
 * @n: the number of elemnts from the src array
 * Return: itreturn the new est array
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcmp - this function and the function strcmp are the same
 * @s1: the first term
 * @s2: the second term
 * Return: it return 0 if s1 and s2 are the same
 */

int _strcmp(char *s1, char *s2)
{
	int i, a = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			a = s1[i] - s2[i];
			break;
		}
	}
	return (a);
}
