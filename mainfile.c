#include "headerf.h"
/**
  * main - entry point
  * Return: return 0
  */
int main(void)
{
char whattoprint[MAX_INPUT];
size_t siz = 0;

while (1)
{
mydispfunx_edna();
myreadfunx_edna((char **)&whattoprint, &siz);
myexecfunx_edna(whattoprint);
myprintfunx_edna(whattoprint);
}
return (0);
}
