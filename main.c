#include "main.h"

/**
 * main - entry pont
 * Return: 0 on success
 * @argc: number of arguments
 * @argv: array of
 */

int main(__attribute__((unused))int argc, char **argv)
{
	ssize_t len;
	char **args = NULL, *command, *user_input = NULL;
	size_t buffer;
	int count = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			_printf("$ ");
		len = getline(&user_input, &buffer, stdin);
		if (len == -1)
			control_d(user_input);

		args = array_func(user_input, len);	/*creates and returns an array*/
		if (args[0] == NULL)
		{
			free_mem(args);
			continue;
		}
		exit_func(args, user_input);
		if (_strcmp(args[0], "env") == 0)
		{
			_printEnv();
			free_mem(args);
			continue;
		}
		command = search_command(args[0]);
		if (command != NULL)
			fork_func(command, args);
		else
		{
			count++;
			error_func(args[0], count, argv[0]);
		}
		free_mem(args);
		free(command);
	}
	return (0);
}
