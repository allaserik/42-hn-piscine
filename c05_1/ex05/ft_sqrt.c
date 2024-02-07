/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:59:12 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 17:55:37 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that returns the square root of a number (if it exists), or 0 if
 * the square root is an irrational number.
 * Handle negative input (no square root for negative numbers)
 * Initialize the search range:
 * int low = 1;
 * int high = nb;
 * int result = 0;
 * Use binary search:
 * Calculate the middle value mid = low + (high - low) / 2
 * Check if mid * mid is less than or equal to nb
 * Update the result and narrow the search range
 * Adjust the high end of the search range
 * Check if the result is a valid square root
 */
int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	result;

	if (nb < 0)
		return (0);
	low = 1;
	high = nb;
	result = 0;
	while (low <= high)
	{
		if ((low + (high - low) / 2) <= nb / (low + (high - low) / 2))
		{
			result = (low + (high - low) / 2);
			low = (low + (high - low) / 2) + 1;
		}
		else
		{
			high = (low + (high - low) / 2) - 1;
		}
	}
	if (result * result == nb)
		return (result);
	else
		return (0);
}
/**
 * Main for testing ft_sqrt.
 */
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(25));
// }
