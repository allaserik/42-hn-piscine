#include <unistd.h>

int	is_char_alpha(char str)
{
	if (((str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z') || (str >= 'a'
				&& str <= 'z')))
		return (1);
	return (0);
}

/**
 * function that checks if a given string is alphanumeric.
 * It should print a
 * 1 followed by a newline if yes and a
 * 0 with a newline if not.
 * Empty strings should print 1 with a new line.
 */
void	check_an(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_char_alpha(str[i]))
		{
			write(1, "0\n", 2);
			return ;
		}
		i++;
	}
	write(1, "1\n", 2);
}
