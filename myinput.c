#include "headerf.h"
/**
 * myreadfunx_edna - its reads the command passed
 * @whattoprint: command to be read (function parameter
 * @siz: size of string
 * Return: return 0
 */

void myreadfunx_edna(char **whattoprint, size_t *siz)
{
	ssize_t size;

	*whattoprint = NULL;

	size = getline(whattoprint, siz, stdin);

	if (size == -1)
	{
		if (feof(stdin))
		{
			myprintfunx_edna("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			myprintfunx_edna("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	(*whattoprint)[strcspn(*whattoprint, "\n")] = '\0';
}
