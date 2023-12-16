#include "headerf.h"
/**
 * _cusstrcmp - compares two strings
 * @s1: first string,s1
 * @s2: second string,s2
 * Return: return 0 if s1 and s2 are equal
 */

int _cusstrcmp(char *s1, char *s2)
{
int e = 0, ab = 0;

	while (ab == 0)
	{
		if ((*(s1 + e) == '\0') && (*(s2 + e) == '\0'))
			break;
		ab = *(s1 + e) - *(s2 + e);
		e++;
	}

return (ab);
}
