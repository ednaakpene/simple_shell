#include "headerf.h"
/**
 * myexecfunx_edna - it executes the commands given
 * @whattoprint: command to execute
 * @envp: environment variable
 * Return: return void
 */

void myexecfunx_edna(const char *whattoprint, char *envp[])
{
	pid_t processid = fork();

	if (processid == -1)
	{
		perror("fork error");
		exit(EXIT_FAILURE);
	}
	if (processid == 0)
	{
		exec_processid(whattoprint, envp);
	}
	else
	{
		wait(NULL);
	}
}

/**
 * exec_processid - Execute command in the child process
 * @whattoprint: Command to be executed
 * @envp: Environment variables
 */

void exec_processid(const char *whattoprint, char *envp[])
{
	char *tkn;
	char *agm[MAX_ARG];
	int e = 0;

	tkn = mystrtokfunx_edna((char *)whattoprint, " ");

	while (tkn != NULL)
	{
		agm[e++] = tkn;
		tkn = mystrtokfunx_edna(NULL, " ");
	}
	agm[e] = NULL;

	if (execve(agm[0], agm, envp) == -1)
	{
		perror("No Command Found.\n");
		exit(EXIT_FAILURE);
	}
}
