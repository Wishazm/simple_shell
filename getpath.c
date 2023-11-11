#include "main.h"
/**
 * get_path - determinates the path of the command
 * @cmd: the command
 * Return: the path
 */
char *get_path(char *cmd)
{
	char *path, *CMD, *tmp;
	struct stat st;
	int i;

	for (i = 0; cmd[i]; i++)
	{
		if (cmd[i] == '/')
		{
			if (stat(cmd, &st) == 0)
				return (_strdup(cmd));

			return (NULL);
		}
	}

	path = get_env("PATH");

	tmp = strtok(path, ":");
	while (tmp)
	{
		CMD = malloc(_strlen(tmp) + 1 + _strlen(cmd) + 1);
		while (CMD)
		{
			_strcpy(CMD, tmp);
			_strcat(CMD, "/");
			_strcat(CMD, cmd);
			if (stat(CMD, &st) == 0)
			{
				free(path);
				return (CMD);
			}
			free(CMD), CMD = NULL;

			tmp = strtok(NULL, ":");
		}
	}
	free(path), path = NULL;
	return (NULL);
}
