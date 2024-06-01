#include "shell.h"

/**
 * run_action - executes command
 * @action: command to be executed
 */

void run_action(const char *action)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		alpha_execute("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[224];
		int arg_count = 0;

		char *token = strtok((char *)action, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execvp(args[0], args);
		alpha_execute("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
