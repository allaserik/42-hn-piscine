/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:36:35 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 10:41:48 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays ’N’ or ’P’ depending on the integer’s sign entered
 * as a parameter. If n is negative, display ’N’. If n is positive or null,
 * display ’P’.
 * @param n The integer to be checked.
 */
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n >= 0)
		write(1, "P", 1);
}

/**
 * Main function.
 */
// int	main(void)
// {
// 	int	n;

// 	n = -123456789;
// 	ft_is_negative(n);
// 	return (0);
// }
