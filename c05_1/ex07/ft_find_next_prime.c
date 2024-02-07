/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:02:17 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 18:11:49 by eallas           ###   ########.fr       */
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
 * Function that returns the next prime number greater or equal to the number
 * given as argument.
 *
 * This function returns the next prime number greater than or equal to the
 * given number nb. The logic is as follows:
 * It initializes a variable i to nb and runs a loop.
 * Inside the loop, it checks if the current value of i is a prime number
 * using the ft_is_prime function.
 * If it is, the function returns i.
 * If i is not a prime number, it increments i and continues the loop.
 */
int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i >= nb)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}

/**
 * Main function to test ft_find_next_prime.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 2;
// 	while (i <= 100)
// 	{
// 		printf("Next prime to %d is %d\n", i, ft_find_next_prime(i));
// 		i++;
// 	}
// 	return (0);
// }
