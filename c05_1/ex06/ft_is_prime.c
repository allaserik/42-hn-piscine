/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:56:05 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 18:09:14 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that returns 1 if the number given as a parameter is a prime
 * number, and 0 if it isn’t.
 *
 * This function checks whether a given number nb is a prime number or not.
 * Here's a breakdown of the logic:
 * If nb is less than 2, it returns 0 because 0 and 1 are not prime numbers.
 * It then initializes a variable i to 2 and runs a loop from 2 to nb / 2.
 * Inside the loop, it checks if nb is divisible evenly by i. If it is,
 * nb is not a prime number, and the function returns 0.
 * If the loop completes without finding a divisor, the function returns 1,
 * indicating that nb is a prime number.
 */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * Main function to test ft_is_prime.
 * Looks up prime numbers betweeen 2..100
 */
// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 2;
// 	while (i <= 100)
// 	{
// 		if (ft_is_prime(i) == 1)
// 			printf("%d is a prime number\n", i);
// 		i++;
// 	}
// 	return (0);
// }
