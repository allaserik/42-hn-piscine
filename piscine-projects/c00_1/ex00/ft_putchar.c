/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:14:59 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 12:37:21 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays the character passed as a parameter.
 * @param char c the character to be displayed
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * The program always starts with the main function.
 */
// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	ft_putchar(c);
// }
