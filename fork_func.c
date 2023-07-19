#include "main.h"
/**
 * fork_func - creates a child process
 * @command: the command to execute
 * @args: array of commands
 */
void fork_func(char *command, char **args)
{
	pid_t child_id;
	int exit_status;


	child_id = fork();

	if (child_id < 0)
	{
		exit(EXIT_FAILURE);
	}
	else if (child_id == 0)
	{
		execve(command, args, environ);
	}
	else
	{
		waitpid(child_id, &exit_status, 0);
	}
}
