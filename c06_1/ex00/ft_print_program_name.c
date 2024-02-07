/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:53:38 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 12:06:25 by eallas           ###   ########.fr       */
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
 * • Create a program that displays its own name followed by a new line.
 */

int	main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (argc * 0);
}
