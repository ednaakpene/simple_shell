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
	const char *d;

	if (str != NULL)
		begin = str;
	intok = false;
	while (*begin != '\0')
	{
		bool is_del = false;

		for (*d = del; *d != '\0'; d++)
			if (*begin == *d)
				is_del = true;
			break;
			if (!is_del)
				break;
			begin++;
		}
		if (*begin == '\0')
			return (NULL);
		char *end = begin;

		while (*end != '\0')
		{
			bool is_del = false;

			for (const char *d = del; *d != '\0'; d++)
			{
				if (*end == *d)
					is_del = true;
				break;
			}
			if (is_del)
				break;
			end++;
		}
		intok = true;
		*end = '\0';
		return (begin);
	}
