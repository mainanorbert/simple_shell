## Simple Shell
A simple shell project at ALX involves creating a basic command-line interpreter, similar to the Unix shell. This project is a key part of the curriculum at ALX, designed to help students understand the inner workings of a shell and the underlying concepts of operating systems and system programming. Here’s a breakdown of what the project typically entails
## Learning Outcomes
Understanding of System Calls:

Gain hands-on experience with essential system calls like fork, execve, and waitpid.
Process Management:

Learn how to manage processes and handle their lifecycle within a shell environment.
String Manipulation:

Improve skills in parsing and handling strings in C.
Building a Robust Application:

Understand the importance of error checking, signal handling, and providing a user-friendly interface in command-line tools.

## Features

- Command parsing
- Executing built-in commands (e.g., `cd`, `exit`)
- Executing system commands using PATH
- Basic error handling

## Files

- `AUTHORS`: List of contributors to the project
- `README.md`: This readme file
- `_getEnv.c`: Functions related to environment variables
- `_number.c`: Utility functions for handling numbers
- `_printf.c`: Custom printf implementation
- `_putchar.c`: Custom putchar implementation
- `comm_array.c`: Command array handling functions
- `error_func.c`: Error handling functions
- `fork_func.c`: Functions related to forking processes
- `free_mem.c`: Functions to free allocated memory
- `inbuilt_func.c`: Implementation of built-in shell commands
- `main.c`: Main program entry point
- `main.h`: Header file with function prototypes and macros
- `print.h`: Header file for custom printf functions
- `search_func.c`: Functions to search for commands in PATH
- `user_functions.c`: User-defined functions
- `user_functions2.c`: Additional user-defined functions

## Installation

To install and compile the simple shell, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/your-username/simple_shell.git

2. Change Directory
   ```sh
   cd simple_shell
 
3. Compile the source files:
   ```sh
   gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

## Usage
1. `./hsh`
2. $ `ls -l`
3. $ `pwd`
4. $ `cd /path/to/directory`
5. $ `echo "Hello, World!"`
6. $ `exit`
