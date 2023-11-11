#include "shell.h"
/**
 * main - Entry to simple shell project main func
 * @argc: counter
 * @argv: arguments
 * Return: 0 Alaways (success)
 */
int main(int argc, char **argv)
{
	char *line = NULL, **cmd = NULL;
	int status = 0, indx = 0;
	(void) argc;

	while (1)
	{
		line = getlinec();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		indx++;

		cmd = splitter(line);
		if (!cmd)
			continue;

		if (built_in(cmd[0]))
			handle_builtin(cmd, status);
		else
		status = _execute(cmd, argv, indx);

	}

}
