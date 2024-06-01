#include "shell.h"

/**
 * fetch_action - reads input command
 * @action: command to be read
 * @size: memory allocated
 */
void fetch_action(char *action, size_t size)
{
	if (fgets(action, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			alpha_execute("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			alpha_execute("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	action[strcspn(action, "\n")] = '\0';
}
