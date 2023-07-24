#include "main.h"
/**
 * _getEnv - gets value of environment variable given
 * @env_variable: name of env variable
 * Return: pointer to env value
 */

char *_getEnv(char *env_variable)
{
	char **env = NULL;
	size_t len = _strlen(env_variable);

	if (env_variable == NULL || environ == NULL)
	{
		return (NULL);
	}

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, env_variable, len) == 0 && (*env)[len] == '=')
			return (*env + len + 1);
	}
	return (NULL);
}

