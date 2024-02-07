/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:52:56 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 17:42:03 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * A recursive function that returns the value of a power applied to a number.
 * • A power lower than 0 returns 0.
 * • Overflows must not be handled, the function return will be undefined.
 * • We’ve decided that 0 power 0 will returns 1
 */
int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/**
 * Main function to test ft_recursive_power.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(2, 0));
// 	printf("%d\n", ft_recursive_power(2, 1));
// 	printf("%d\n", ft_recursive_power(2, 2));
// 	printf("%d\n", ft_recursive_power(2, 3));
// }
