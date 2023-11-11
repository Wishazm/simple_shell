#include "shell.h"
/**
 * get_env - searches for the environment string pointed to by name
 * @var: string comtaining the reuisted variable
 * Return: the associated value to the string
 */
char *get_env(char *var)
{
	char *copy, *token, *value, *env;
	int i;

	for (i = 0; environ[i]; i++)
	{
		copy = _strdup(environ[i]);
		token = strtok(copy, "=");
		if (_strcmp(token, var) == 0)
		{
			value = strtok(NULL, "\n");
			env = _strdup(value);
			free(copy);
			return (env);
		}
		free(copy), copy = NULL;
	}
	return (NULL);
}
