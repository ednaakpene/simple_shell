#include "headerf.h"
/**
 * _isdigit - checks for digit
 * @c: parameter to be checked
 * Return: return 1 if successful
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
