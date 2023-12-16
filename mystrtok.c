#include "headerf.h"
/**
 * mystrtokfunx_edna - it splits string to tokens
 * @str: string to split
 *@del: deleter(function parameter)
 * Return: return pointer
 */

char *mystrtokfunx_edna(char *str, const char *del)
{
	static char *begin;
	static bool intok;
	static char *end;

	if (str != NULL)
		begin = str;
	intok = false;
	while (*begin != '\0')
		const char *d = del;

	while (*d != '\0')
	{
		if (*begin == *d)
			intok = false;
		break;
		d++;
	}
	if (!intok)
		intok = true;
	break;
	begin++;
	if (*begin == '\0')
		return (NULL);
	end = begin;

	while (*end != '\0')
		const char *d = del;
	while (*d != '\0')
		if (*end == *d)
			break;
	d++;
	if (*d != '\0')
		break;
	end++;
	intok = true;
	*end = '\0';
	return (begin);
}
