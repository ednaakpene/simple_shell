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
char** whattoread;
char whattoexe;
while (1)
{
mydispfunx_edna();
myreadfunx_edna(const char** whattoread, sizeof(whattoread));
myexecfunx_edna(whattoexe);
}
return (0);
}
