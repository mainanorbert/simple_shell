#include "main.h"

/**
 * error_func - prints error for unfound commands
 * @str: unfound command
 * @count: counts name of function
 * @name:name of function
 */

void error_func(char *str, int count, char *name)
{
	printf("%s: %d: %s: not found", name, count, str);
	putchar('\n');
}
