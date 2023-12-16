#include "headerf.h"

/**
 *getpath - takes path from environment
 *@envp: the environment for file to be extracted
 * Return: return path
*/

char *getpath(char **envp)
{
char *del = "=";
int e = 0;
char *key, *pval, *path;

while (envp[e] != NULL)
{
key = strtok(envp[e], del);
pval = strtok(NULL, del);

if (key != NULL && pval != NULL && _cusstrcmp(key, "PATH") == 0)
{
path = pval;
return (path);
break;
}
e++;
}
return (NULL);

}
