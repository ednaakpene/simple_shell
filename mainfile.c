#include "headerf.h"
/**
  * main - entry point
  *@whattoread: function parameter
  *@whattoexe: function parameter
  * Return: return 0
  */
int main(void)
{
char in_put[MAX_INPUT];
size_t siz = 0;

while (1)
{
mydispfunx_edna();
myreadfunx_edna(&whattoread, &siz);
myexecfunx_edna(whattoexe);
myprintfunx_edna(whattoprint);
}
return (0);
}
