#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#define MAX_COMM 1024
char **array_func(char *user_input, ssize_t len);
void free_mem(char **args);
char *search_command(char *command);
#endif
