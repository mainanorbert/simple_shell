#include "main.h"

/**
 * exit_func - exits the shell
 * @args: arrays of command and ars
 * @user_input: the input to free
 */
void exit_func(char **args, char *user_input)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		free_mem(args);
		free(user_input);
		exit(EXIT_SUCCESS);
	}

}

/**
 * _printEnv - prints environment
 */
void _printEnv(void)
{
	int i = 0;

	while (environ[i])
		_printf("%s\n", environ[i++]);
}
/**
 * control_d - exits loops on -1
 * @user_input: user input to be freed
 */
void control_d(char *user_input)
{
	if (isatty(STDIN_FILENO))
		_putchar('\n');
	free(user_input);
	exit(EXIT_SUCCESS);
}
