#include "main.h"

/**
 * array_func - changes user input into commands
 * @user_input:line of command from user
 * @len: len of string
 * Return: returns array of commands
 */
char **array_func(char *user_input, ssize_t len)
{
	char **args = NULL;
	char *token = NULL;
	int i = 0, count = 0;
	char *input_copy = NULL;
	char *del = " \n";

	input_copy = malloc(sizeof(char) * (len + 1));
	if (input_copy == NULL)
		return (NULL);
	_strcpy(input_copy, user_input);
	token = strtok(input_copy, del);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, del);
	}
	args = malloc(sizeof(char *) * (count + 1));
	token = strtok(user_input, del);
	while (token != NULL)
	{
		args[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		_strcpy(args[i], token);
		i++;
		token = strtok(NULL, del);
	}
	args[i] = NULL;
	free(input_copy);
	return (args);
}
