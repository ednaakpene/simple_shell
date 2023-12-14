#include "headerf.h"
/**
 * myexecfunx_edna - it executes the commands given
 * @whattoprint: command to execute
 * Return: return void
 */

void myexecfunx_edna(const char *whattoprint)

{
	pid_t processid = fork();

	if (processid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}

	else if (processid == 0)
	{
	char *tkn;
	char *agm[MAX_ARG];
	int e = 0;

	tkn = strtok((char *)whattoprint, " ");

	while (tkn != NULL)
	{
	agm[e++] = tkn;
	tkn = strtok(NULL, " ");
	}
	agm[e] = NULL;

	if (execve(agm[0], agm, NULL) == -1)
	{
	perror("execve");
	exit(EXIT_FAILURE);
	}
	}
	else
	{
		wait(NULL);
	}
}
