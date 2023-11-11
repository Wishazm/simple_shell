#include "shell.h"
/**
 * **splitter - splits the line according to the delemitrs
 * @line : string to split
 * Return: the splited string
 */
char **splitter(char *line)
{
	char *split = NULL, *copy = NULL;
	char **cmd = NULL;
	int counter = 0, i = 0;

	if (!line)
		return (NULL);
	copy = _strdup(line);
	split = strtok(copy, " \t\n");
	if (split == NULL)
	{
		free(line), line = NULL;
		free(copy), copy = NULL;
		return (NULL);
	}
	while (split)
	{
		counter++;
		split = strtok(NULL, " \t\n");
	}
	free(copy), copy = NULL;
	cmd = malloc(sizeof(char *) * (counter + 1));
	if (!cmd)
	{
		free(line);
		return (NULL);
	}
	split = strtok(line, " \t\n");
	while (split)
	{
		cmd[i] = strdup(split);
		split = strtok(NULL, " \t\n");
		i++;
	}
	free(line);
	cmd[i] = NULL;
	return (cmd);
}
