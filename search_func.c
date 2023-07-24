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


	path = _getEnv("PATH");
	if (path == NULL)
		return (NULL);
	path_copy = _strdup(path);

	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		comm_path = malloc(_strlen(token) + _strlen(command) + 2);
		_strcpy(comm_path, token);
		_strcat(comm_path, "/");
		_strcat(comm_path, command);
		_strcat(comm_path, "\0");

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
			comm_path2 = malloc(_strlen(command) + 1);
			_strcpy(comm_path2, command);
			free(path_copy);
			return (comm_path2);
		}
	}
	free(path_copy);
	return (NULL);
}
