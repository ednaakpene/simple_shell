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

/**
* main - entry point
* Return: return 0
*/

int main(void)
{
size_t lth = 0;
char *lne = NULL;

myprintfunx_edna("Your input: ");

myreadfunx_edna(&lne, &lth);

myprintfunx_edna("output: \n");

free(lne);

return (0);
}
