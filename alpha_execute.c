#include "shell.h"

/**
 * alpha_execute -prints functions to the standard output
 * @alpha_string: string to be executed
 */

void alpha_execute(const char *alpha_string)
{
	write(STDOUT_FILENO, alpha_string, strlen(alpha_string));
}
