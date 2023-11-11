#include "shell.h"

/**
 * _itoa - this function turn integers to characters
 * @n: this input int
 * Return: it return the integrs
 */
char *_itoa(int n)
{
	char buff[20];
	int i = 0;

	if (n == 0)
		buff[i++] = '0';
	else
	{
		while (n > 0)
		{	buff[i++] = (n % 10) + '0';
			n /= 10;
		}
	}

	buff[i] = '\0';
	reversing(buff, i);

	return (_strdup(buff));
}

/**
 * _strlen - it like the function strline
 * @s: the input charchter
 * Return: it retuen the number output of the function
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}


/**
 * _puts - this function is similar to the function puts
 * @str: the input string
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * reversing - function that reverses
 * @str: string
 * @length: length
 */

void reversing(char *str, int length)
{
	char tmp;
	int s = 0;
	int e = length - 1;

	while (s < e)
	{
		tmp = str[s];
		str[s] = str[e];
		str[e] = tmp;
		s++;
		e--;
	}
}
