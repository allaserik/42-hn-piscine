#include <unistd.h>

/**
 * Function that displays a character it receives followed by a newline.
 */
void	put_char(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}
