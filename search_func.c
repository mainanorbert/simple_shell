#include "main.h"

/**
 * search_command - search command in the path
 * @command: to be returned
 * Return: returns command
 */

char *search_command(char *command)
{
	char *comm_path, *path_copy, *comm_path2, *token, *path;
	struct stat test_file;


	path = getenv("PATH");
	if (path == NULL)
		return (NULL);
	path_copy = strdup(path);

	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		comm_path = malloc(strlen(token) + strlen(command) + 2);
		strcpy(comm_path, token);
		strcat(comm_path, "/");
		strcat(comm_path, command);
		strcat(comm_path, "\0");

		if (stat(comm_path, &test_file) == 0)
		{
			free(path_copy);
			return (comm_path);
		}
		else
		{
			free(comm_path);
			token = strtok(NULL, ":");
		}
		if (stat(command, &test_file) == 0)
		{
			comm_path2 = malloc(strlen(command) + 1);
			strcpy(comm_path2, command);
			free(path_copy);
			return (comm_path2);
		}
	}
	free(path_copy);
	return (NULL);
}

