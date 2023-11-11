#include "shell.h"
/**
 * getlinec - reads the line
 *
 * Return: returns the line
 */
char *getlinec(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t n;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ",  2);
	n = getline(&line, &len, stdin);

	if (n == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
