#include "headerf.h"

/**
 * main - entry point
 * Return: return 0
 */
int main(void)
{
	char *whattoprint = NULL;
	size_t siz = 0;

	char *envp[] = {NULL};
	char *path = getpath(envp);

	if (path != NULL)
	{
		printf("PATH: %s\n", path);
	}
	else
	{
		printf("PATH not found: %s\n", path);
	}
	while (1)
	{
		mydispfunx_edna();
		myreadfunx_edna(&whattoprint, &siz);
		myexecfunx_edna(whattoprint, envp);
		free(whattoprint);
	}
	return (0);
}
