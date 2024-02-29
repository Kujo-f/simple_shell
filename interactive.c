#include "shell.h"

/**
 * _strint - converts a string to an integer
 * @str: string to be converted
 *
 * Return: 0 if numbers not in string, otherwise converted number
 */
int _strint(char *str)
{
	int i, flag = 0, output, sign = 1;
	unsigned int result = 0;

	for (i = 0; str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (Str[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}


/**
 * _isalph - checks for alphabetic character
 * @ch: The character checked
 *
 * Return: 1 if cha is alphabet, 0 otherwise
 */
int _isalph(int ch)
{
	if ((ch >= 'a' && ch <= 'z' || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}


/**
 * interactive - if shell in interactive mode return true
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->read <= 2);
}
