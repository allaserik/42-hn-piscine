/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:58:05 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 10:26:59 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays the alphabet in lowercase, on a single line, by
 * descending order, starting from the letter ’a’.
 */

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/**
 * Main function.
 */
// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
