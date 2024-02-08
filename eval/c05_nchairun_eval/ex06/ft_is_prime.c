/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:59:51 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 11:23:54 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
	to check if a given number nb is a prime number.
	It returns 1 if nb is prime, and 0.

	Prime number is a number that is only divisible
	by 1 and itself, with no other factors

	for this assignment: 0 and 1 are not prime numbers.
*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int main(void)
// {
// 	int number = 13;
// 	int result = ft_is_prime(number);
// 	if (result)
// 	{
// 		printf("%d is a prime number.\n", number);
// 	}
// 	else
// 	{
// 		printf("%d is NOT a prime number.\n", number);
// 	}
// 	return (0);
// }