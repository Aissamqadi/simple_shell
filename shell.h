#ifndef SHELL_H
#define SHELL_H

/* Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
/* Function Prototypes */
void print_prompt(void);
char *read_input(void);
char **tokenize_input(char *input);
void free_tokens(char **tokens);
void execute_command(char **args);
int is_builtin_command(char *command);
void handle_builtin_command(char **args);
void execute_external_command(char **args);
void print_error(char *message);

#endif /* SHELL_H */
