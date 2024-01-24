/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:11:06 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 10:33:38 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays the alphabet in the reverse order z-a.
 */
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

/**
 * Main function.
 */
// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
