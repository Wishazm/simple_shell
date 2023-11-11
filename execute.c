#include "main.h"
/**
 * _execute - executes the commands
 * @cmd: the splitted string
 * @argv: array of string
 * @indx: index
 * Return: return value
 */
int _execute(char **cmd, char **argv, int indx)
{
	pid_t child;
	char *CMD;
	int status;

	CMD = _getpath(cmd[0]);
	if (!CMD)
	{
		printerro(argv[0], cmd[0], indx);
		freearrays(cmd);
		return (127);
	}
	child = fork();
	if (child == 0)
	{
		if (execve(CMD, cmd, environ) == -1)
		{
			free(CMD), CMD = NULL;
			freearrays(cmd);

		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearrays(cmd);
		free(CMD), CMD = NULL;
	}
	return (WEXITSTATUS(status));
}
