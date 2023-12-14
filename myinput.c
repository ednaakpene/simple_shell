#include "headerf.h"
/**
 * myreadfunx_edna - its reads the command passed
 * @whattoprint: command to be read (function parameter
 * @siz: size of string
 * Return: return 0
 */

void myreadfunx_edna(char **whattoprint, size_t *siz)
{
*siz = 0;
*whattoprint = NULL;

if (getline(whattoprint, siz, stdin) == -1)
{
if (feof(stdin) == 0)
{
myprintfunx_edna("Error\n");
exit(EXIT_FAILURE);
}
else
{
myprintfunx_edna("\n");
exit(EXIT_SUCCESS);
}
}
(*whattoprint)[strcspn(*whattoprint, "\n")] = '\0';
}
