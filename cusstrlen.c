#include "headerf.h"
/**
 * _strlen - function to determine length of string
 * @s: parameter
 * Return: return length
 */

int _strlen(char *s)
{
int e;
int count = 0;

for (e = 0; s[e] != '\0'; e++)
	count++;
return (count);
}
