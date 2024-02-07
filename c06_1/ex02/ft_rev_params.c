/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:53:45 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 11:20:56 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays a string of characters on the standard output.
 */
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/**
 * We’re dealing with a program here, you should therefore have a function
 * main in your .c file.
 * • Create a program that displays its given arguments.
 * • One per line, in the reverse order of the command line.
 * • It should display all arguments, except for argv[0].
 * Solution:
 * argc is the count of arguments n.
 * argv is all the arguments 0..n
 * we start writing all the arguments from the last or place argc-1.
 * we put a newline after each writeout.
 * we move to next with argc--.
 * argc > 0 ensures that we don't display the argument on place 0.
 */
int	main(int argc, char **argv)
{
	argc--;
	while (argc > 0)
	{
		ft_putstr(argv[argc]);
		ft_putstr("\n");
		argc--;
	}
	return (0);
}
