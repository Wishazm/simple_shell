#include "shell.h"
/**
 * built_in - a function that compares the built in with the cmd
 * @cmd: the command
 * Return: return 0 on failure, 1 on success
 */
int built_in(char *cmd)
{
	char *builtins[] = {"exit", "env", NULL};
	int i;

	for (i = 0; builtins[i]; i++)
	{
		if (_strcmp(cmd, builtins[i]) == 0)
			return (1);
	}
	return (0);
}
/**
 * handle_builtin - executes the command founded
 * @cmd: the command
 * @status: the last status of the executed cmd
 */
void handle_builtin(char **cmd, int status)
{
	if (_strcmp(cmd[0], "exit") == 0)
		exite(cmd, status);
	else if (_strcmp(cmd[0], "env") == 0)
		printenv(cmd, status);
}
/**
 * exite -  terminate the function currently running
 * @cmd: the command
 * @status : the last status of the executed cmd
 */
void exite(char **cmd, int status)
{
	freearrays(cmd);
	exit(status);
}
/**
 * printenv - prints the environ
 * @cmd: the command
 * @status : the last status of the executed cmd
 */
void printenv(char **cmd, int status)
{
	int i;
	(void) status;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	freearrays(cmd);
}

