#include "monty.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: parameter to be checked
 *
 * Return: Always 1 if c is a digit
 * and 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

/**
* check_int - checks if a string is an integer
*
* @string: string involved
*
* Return: 0 if false or 1 if true
*/

int check_int(const char *string)
{
	int i = 0;

	if (string == NULL || string[i] == '\0')
		return (0);

	if (string[0] == '-' || string[0] == '+')
		i++;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (!_isdigit(string[i]))
		return (0);
	}

	return (1);
}
