#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalize characters ina string
 * @str: our parameter here
 * Return: the value of our string
 */

char *cap_string(char *str)
{
	int i;
	int len = strlen(str);
	int capitalize = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}
	}
	return (str);
}
