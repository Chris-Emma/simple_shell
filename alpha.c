#include "shell.h"

/**
 * main - entry point
 * Return: 0 on success
 */

int main(void)
{
	char action[224];

	while (1)
	{
		prompt_exhibit();
		run_action(action);
		fetch_action(action, sizeof(action));
	}

	return (0);
}
