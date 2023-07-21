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
extern char **environ;
char **array_func(char *user_input, ssize_t len);
void free_mem(char **args);
char *search_command(char *command);
void exit_func(char **args, char *user_input);
void fork_func(char *command, char **args);
void error_func(char *str, int count, char *name);
void control_d(char *user_input);
void _printEnv(void);
int _strcmp(char*, char*);
#endif
