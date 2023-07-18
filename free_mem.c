#include "main.h"
/**
 * free_mem - frees array
 * @args: array of commands
 */
void free_mem(char **args)
{
	int i;

	for (i = 0; args[i] != NULL; i++)
		free(args[i]);
}
