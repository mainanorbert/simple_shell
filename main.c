#include "main.h"

/**
 * main - entry pont
 * Return: 0 on success
 */

int main(void)
{
	ssize_t len;
	int i = 0;
	char **args = NULL, *user_input = NULL;
	size_t buffer;

	while (1)
	{
		printf("$ ");
		len = getline(&user_input, &buffer, stdin);
		if (len == -1)
		{
			free(user_input);
			exit(EXIT_SUCCESS);
		}
		if (user_input[0] == '\n')
			continue;

		args = array_func(user_input, len);	/*creates and returns an array*/
		for (i = 0; args[i] != NULL; i++)
			printf("%s\n", args[i]);
		free_mem(args);
		free(args);
	}
	return (0);
}
