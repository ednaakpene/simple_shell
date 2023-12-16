#include "headerf.h"

/**
 * _strncat - function name
 * @dest: parameter one
 * @src: second parameter
 * @n: third parameter
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
int length = strlen(dest);
int e;

for (e = 0; e < n && *src != '\0'; e++)
{
	dest[length + e] = *src;
	src++;
}
	dest[length + e] = '\0';
return (dest);
}
