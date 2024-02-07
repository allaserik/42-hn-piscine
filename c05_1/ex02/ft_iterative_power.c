/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:45:14 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 17:39:09 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * An iterated function that returns the value of a power applied to a number.
 * • A power lower than 0 returns 0.
 * • Overflows must not be handled.
 * • We’ve decided that 0 power 0 will returns 1
 */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/**
 * Main function for testing the ft_iterative_power.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n", ft_iterative_power(2, 4));
// 	printf("%d\n", ft_iterative_power(2, 5));
// 	printf("%d\n", ft_iterative_power(2, 6));
// }
