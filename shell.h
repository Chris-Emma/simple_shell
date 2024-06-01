#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>

void alpha_execute(const char *alpha_string);
void prompt_exhibit(void);
void run_action(const char *action);
void fetch_action(char *action, size_t size);
#endif
