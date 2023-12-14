#include "headerf.h"
/**
  * myprintfunx_edna - prints output
  * @whattoprint: message to be printed (function parameter)
  * Return: return void
  */

void myprintfunx_edna(const char *whattoprint)
{
write(STDOUT_FILENO, whattoprint, strlen(whattoprint));
}
