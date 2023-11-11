#include "main.h"
/**
 * freearrays - free an array
 * @array: array
 */
void freearrays(char **array)
{
	int i;

	if (!array)
		return;

	for (i = 0; array[i]; i++)
	{
		free(array[i]);
		array[i] = NULL;
	}

	free(array), array = NULL;
}
